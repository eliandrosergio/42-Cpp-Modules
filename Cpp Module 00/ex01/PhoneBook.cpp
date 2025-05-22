/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:35:02 by efaustin          #+#    #+#             */
/*   Updated: 2025/04/23 17:44:45 by efaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->count = 0;
};

// ****************** Setters ******************
void	PhoneBook::addContact(const Contact &newcontact) {
	int nextIndex = this->count % 8;
	this->contacts[nextIndex] = newcontact;
	if (this->count < 8)
		count++;
};

// ****************** Others ******************

std::string PhoneBook::formatString(const std::string &str) const {
	size_t	bytePos = 0;
	size_t	visibleChars = 0;

	for (size_t i = 0; i < str.length(); i++) {
		if ((str[i] & 0xC0) != 0x80) {
			visibleChars++;
			if (visibleChars > 10)
				break ;
		}
	}
	if (visibleChars <= 10)
		return (str);
	visibleChars = 0;
	for (size_t i = 0; i < str.length(); i++) {
		if ((str[i] & 0xC0) != 0x80) {
			visibleChars++;
			if (visibleChars > 9) {
				bytePos = i;
				break ;
			}
		}
	}
	return (str.substr(0, bytePos) + ".");
}

int	PhoneBook::getExtraBytes(const std::string &str) const {
	int extraBytes = 0;

	for (size_t j = 0; j < str.length(); j++) {
		if ((str[j] & 0xC0) == 0x80) {
			extraBytes++;
		}
	}
	return (extraBytes);
}

// ****************** Getters ******************
int		PhoneBook::getCount() const {
	return (this->count);
};

void PhoneBook::displayContactList() const {
	int	extraBytes = 0;
	std::string	str;

	std::cout << std::right;
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->count; i++) {
		std::cout << "|" << std::setw(10) << (i + 1);

		str = formatString(this->contacts[i].getFirstName());
		extraBytes = getExtraBytes(str);
		std::cout << "|" << std::setw(10 + extraBytes) << str;

		str = formatString(this->contacts[i].getLastName());
		extraBytes = getExtraBytes(str);
		std::cout << "|" << std::setw(10 + extraBytes) << str;

		str = formatString(this->contacts[i].getNickName());
		extraBytes = getExtraBytes(str);
		std::cout << "|" << std::setw(10 + extraBytes) << str << "|" << std::endl;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
}

void	PhoneBook::displayContactItem(int index) const {
	if (index >= 0 && index < this->count) {
		std::cout << "first Name: " << this->contacts[index].getFirstName() << std::endl;
		std::cout << "last Name: " << this->contacts[index].getLastName() << std::endl;
		std::cout << "nickname: " << this->contacts[index].getNickName() << std::endl;
		std::cout << "phone number: " << this->contacts[index].getPhoneNumber() << std::endl;
		std::cout << "darkest secret: " << this->contacts[index].getDarkestSecret() << std::endl;
	}
	else
		std::cout << "Contact Index Not Found" << std::endl;
};
