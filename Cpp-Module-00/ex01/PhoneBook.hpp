/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efaustin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:34:15 by efaustin          #+#    #+#             */
/*   Updated: 2025/04/23 17:44:39 by efaustin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <sstream>

class PhoneBook {
	private:
		int count;
		Contact contacts[8];
		
	public:
		PhoneBook(); // Constructor

		// Setters
		void	addContact(const Contact &newcontact);
		
		// Getters
		int		getCount() const;
		void	displayContactList() const;
		void	displayContactItem(int index) const;

		// Others
        int getExtraBytes(const std::string &str) const;
		std::string	formatString(const std::string &str) const;
};

#endif
