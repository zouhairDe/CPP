/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:06:06 by zouddach          #+#    #+#             */
/*   Updated: 2025/02/25 16:07:11 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>

typedef struct s_data
{
	std::string name;
	int			age;
}	Data;

class Serializer
{
	private:
		Serializer();
	public:
		static uintptr_t	*serialize(Data *data);
		static Data			*deserialize(uintptr_t *raw);
};

#endif