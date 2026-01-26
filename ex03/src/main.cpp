/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 14:59:01 by jvalkama          #+#    #+#             */
/*   Updated: 2026/01/26 16:43:11 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void) {
    Point const     a(3.0f, 3.5f);
    Point const     b(2.0f, 2.6f);
    Point const     c(1.7f, 1.0f);

    Point const     p1(2.0f, 2.0f);
    Point const     p2(2.5f, 2.0f);

    std::cout << bsp(a, b, c, p1) << std::endl;
    std::cout << bsp(a, b, c, p2) << std::endl;
}