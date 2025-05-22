/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:34:32 by efaustin          #+#    #+#             */
/*   Updated: 2025/04/23 17:44:25 by efaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	
	public:
        Contact(); // Constructor

	// Setters
	void	setFirstName(const std::string &name);
	void	setLastName(const std::string &name);
	void	setNickName(const std::string &name);
	void	setPhoneNumber(const std::string &number);
	void	setDarkestSecret(const std::string &secret);

	// Getters
	std::string	getFirstName() const;
	std::string	getLastName() const;
	std::string	getNickName() const;
	std::string	getPhoneNumber() const;
	std::string	getDarkestSecret() const;
};

#endif
