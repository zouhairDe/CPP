/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zouddach <zouddach@1337.student.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:08:26 by zouddach          #+#    #+#             */
/*   Updated: 2025/02/25 16:07:29 by zouddach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serializer.hpp"

Serializer::Serializer()
{
}

uintptr_t *Serializer::serialize(Data *data)
{
	uintptr_t *dataptr = reinterpret_cast<uintptr_t *>(data);
	return dataptr;
}

Data *Serializer::deserialize(uintptr_t *raw)
{
	Data *data = reinterpret_cast<Data *>(raw);
	return data;
}