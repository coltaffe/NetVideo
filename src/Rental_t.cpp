/*
  Rental_t.cpp

  Test program for class Rental
*/

#include <cassert>

#include "Rental.hpp"

int main() {

    {
      Video lotr("Lord of the Rings", Video::REGULAR);
      
      Rental rental(lotr, 10);
      
      assert(rental.getDaysRented() == 10);
      assert(rental.getVideo() == lotr);
    }

    return 0;
}
