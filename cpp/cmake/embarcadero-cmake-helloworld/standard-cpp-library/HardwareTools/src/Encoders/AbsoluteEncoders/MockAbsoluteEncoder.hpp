#ifndef MOCKABSOLUTEENCODER_HPP
#define MOCKABSOLUTEENCODER_HPP

#include "IAbsoluteEncoder.hpp"
namespace Encoders { 
namespace AbsoluteEncoders {

class MockAbsoluteEncoder : IAbsoluteEncoder {
    private:
    int _absoluteEncoderPosition {0};

    public:
    MockAbsoluteEncoder()=default;
    int GetPosition() override;
    void Init() override ;
};

}}

#endif /* MOCKABSOLUTEENCODER_HPP */ 