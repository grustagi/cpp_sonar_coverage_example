#include "greatest.h"

// declare this macro in exactly one file
#define BOOST_TEST_MODULE test module name
#define BOOST_TEST_ALTERNATIVE_INIT_API
#include <boost/test/unit_test.hpp>
using namespace boost::unit_test;

BOOST_AUTO_TEST_CASE(A)
{	
  BOOST_CHECK_EQUAL(3, GreatestOfThree(3,1,2));
}

BOOST_AUTO_TEST_CASE(B)
{	
  BOOST_CHECK_EQUAL(3, GreatestOfThree(1,3,2));
}

BOOST_AUTO_TEST_CASE(C)
{	
  BOOST_CHECK_EQUAL(3, GreatestOfThree(1,2,3));
}

int main(int argc,char**argv)
{
  return boost::unit_test::unit_test_main(init_unit_test, argc, argv);
}