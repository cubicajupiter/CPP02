/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 14:59:01 by jvalkama          #+#    #+#             */
/*   Updated: 2026/03/07 12:43:02 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

static inline void	print_location(bool is_inside);

int main(void) {
    Point const     a(3.0f, 3.5f);
    Point const     b(2.0f, 2.6f);
    Point const     c(1.7f, 1.0f);

    Point const     p1(2.0f, 2.0f);
    Point const     p2(2.5f, 2.0f);

    std::cout << bsp(a, b, c, p1) << std::endl;
    std::cout << bsp(a, b, c, p2) << std::endl;

	
    Point const a(0, 0);
    Point const b(10, 0);
    Point const c(0, 10);

	std::cout << "Point inside" << std::endl;
    print_location(bsp(a, b, c, Point(2, 2)));

	std::cout << "Point outside" << std::endl;
    print_location(bsp(a, b, c, Point(15, 15)));
	std::cout << "Negative Point outside" << std::endl;
    print_location(bsp(a, b, c, Point(-1, -1)));

	std::cout << "Edge point (on hypotenuse BC)" << std::endl;
    print_location(bsp(a, b, c, Point(5, 5)));
	std::cout << "Edge point (on AC)" << std::endl;
    print_location(bsp(a, b, c, Point(0, 5)));

	std::cout << "Point exactly on vertex A" << std::endl;
    print_location(bsp(a, b, c, Point(0, 0)));
	std::cout << "Point exactly on vertex B" << std::endl;
    print_location(bsp(a, b, c, Point(10, 0)));

	std::cout << "Point barely inside:" << std::endl;
    print_location(bsp(a, b, c, Point(0.1f, 0.1f)));

    return 0;
}

static inline void	print_location(bool is_inside) {
	if (is_inside)
		std::cout << "Inside!" << std::endl;
	else
		std::cout << "Outside!" << std::endl;
}