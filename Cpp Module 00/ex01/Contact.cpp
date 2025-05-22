/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:33:51 by efaustin          #+#    #+#             */
/*   Updated: 2025/04/23 17:44:16 by efaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact() {};

// ****************** Setters ******************
void	Contact::setFirstName(const std::string &name) {
	this->first_name = name;
};

void	Contact::setLastName(const std::string &name) {
	this->last_name = name;
};

void	Contact::setNickName(const std::string &name) {
	this->nickname = name;
};

void	Contact::setPhoneNumber(const std::string &number) {
	this->phone_number = number;
};

void	Contact::setDarkestSecret(const std::string &secret) {
	this->darkest_secret = secret;
}

// ****************** Getters ******************
std::string	Contact::getFirstName() const {
	return (this->first_name);
};

std::string	Contact::getLastName() const {
	return (this->last_name);
};

std::string	Contact::getNickName() const {
	return (this->nickname);
};

std::string	Contact::getPhoneNumber() const {
	return (this->phone_number);
};

std::string	Contact::getDarkestSecret() const {
	return (this->darkest_secret);
};
