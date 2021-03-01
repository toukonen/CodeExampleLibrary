#include "MockAbsoluteEncoder.hpp"

int Encoders::AbsoluteEncoders::MockAbsoluteEncoder::GetPosition(){
    _absoluteEncoderPosition = _absoluteEncoderPosition + 1;
    return _absoluteEncoderPosition;
}
void Encoders::AbsoluteEncoders::MockAbsoluteEncoder::Init(){
    _absoluteEncoderPosition = 0;
}
