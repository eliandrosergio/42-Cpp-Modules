/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:33:43 by efaustin          #+#    #+#             */
/*   Updated: 2025/04/23 17:44:51 by efaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	ft_str_to_int(const std::string &str)
{
	std::istringstream iss(str);
	int num;
	iss >> num;
	if (iss.fail())
		return (-1);
	return (num);
}

int	ft_search(PhoneBook *myPhoneBook) {
	int	index;
	std::string	indexStr;

	std::cout << std::endl;
	myPhoneBook->displayContactList();
	std::cout << std::endl;
	std::cout << "Insert Contact Index" << std::endl << ">> ";
	if (!std::getline(std::cin, indexStr) || std::cin.eof())
		return (1);
	std::cout << std::endl;
	if (indexStr.empty())
		std::cout << "Empty Contact Index" << std::endl;
	else {
		index = ft_str_to_int(indexStr);
		if (index < 0)
			std::cout << "Contact Index Not a Positive Number" << std::endl;
		else
			myPhoneBook->displayContactItem(index - 1);
	}
	std::cout << std::endl;
	return (0);
}

int	ft_is_space(std::string str) {
	int	j = 0;
	int	len = str.length();

	for (int i = 0; i < len; i++) {
		if (isspace(str[i]))
			j++;
	}
	if (len == j)
		return (1);
	return (0);
}

int	ft_get_user_info(std::string *str, std::string msg)
{
	std::cout << "Insert " << msg << ": ";
	if (!std::getline(std::cin, *str) || std::cin.eof())
		return (1);
	std::cout << std::endl;
	if (str->empty() || ft_is_space(*str))
	{
		std::cout << "Invalid Empty Field" << std::endl << std::endl;
		return (2);
	}
	return (0);
}

int	ft_add_helper(Contact *tempContact) {
	int	status = 0;
	std::string	str;

    status = ft_get_user_info(&str, "first name");
	if (status == 1)
		return (1);
	else if (status == 2)
        return (0);
	(*tempContact).setFirstName(str);
    status = ft_get_user_info(&str, "last name");
	if (status == 1)
		return (1);
	else if (status == 2)
        return (0);
	(*tempContact).setLastName(str);
    status = ft_get_user_info(&str, "nickname");
	if (status == 1)
		return (1);
	else if (status == 2)
        return (0);
	(*tempContact).setNickName(str);
    status = ft_get_user_info(&str, "phone number");
	if (status == 1)
		return (1);
	else if (status == 2)
        return (0);
	(*tempContact).setPhoneNumber(str);
    status = ft_get_user_info(&str, "darkest secret");
	if (status == 1)
		return (1);
	else if (status == 2)
        return (0);
	(*tempContact).setDarkestSecret(str);
	return (2);
}

int	ft_add(PhoneBook *myPhoneBook) {
    int status = 0;
	std::string str;
	Contact tempContact;

	std::cout << std::endl;
	status = ft_add_helper(&tempContact);
	if (status != 2)
		return (status);
	myPhoneBook->addContact(tempContact);
	return (0);
}

int main() {
	std::string	command;
	PhoneBook myPhoneBook;

	while (true)
	{
		std::cout << "Insert Command (ADD, SEARCH or EXIT)" << std::endl << ">> ";
		if (!std::getline(std::cin, command) || std::cin.eof()) {
			std::cout << std::endl;
			break ;
		}
		if (command == "ADD") {
			if (ft_add(&myPhoneBook)) {
				std::cout << std::endl;
				break ;
			}
		}
		else if (command == "SEARCH") {
			if (ft_search(&myPhoneBook)) {
				std::cout << std::endl;
				break ;
			}
		}
		else if (command == "EXIT")
			break ;
		else
			std::cout << std::endl;
	}
	return (0);
}
