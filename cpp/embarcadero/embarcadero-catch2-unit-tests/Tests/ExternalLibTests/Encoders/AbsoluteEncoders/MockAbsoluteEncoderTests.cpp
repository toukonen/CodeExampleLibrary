#define CATCH_CONFIG_NO_GLOBAL_NEXTAFTER
#include "catch.hpp"

#include "Encoders\AbsoluteEncoders\MockAbsoluteEncoder.hpp"

using namespace Encoders::AbsoluteEncoders;

TEST_CASE( "MockAbsoluteEncoder_GetPosition_ValueIncreasedByOne" ) {
	MockAbsoluteEncoder _mockAbsoluteEncoder = MockAbsoluteEncoder();
	REQUIRE( _mockAbsoluteEncoder.GetPosition() == 1 );
	REQUIRE( _mockAbsoluteEncoder.GetPosition() == 2 );
	REQUIRE( _mockAbsoluteEncoder.GetPosition() == 3 );
}
