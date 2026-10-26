#ifndef AUDIO_PROCESSOR_H
#define AUDIO_PROCESSOR_H

#include <iostream>

namespace audio {

class AudioProcessor {
public:
    AudioProcessor();
    ~AudioProcessor();
    
    void process();
    void initialize();
    
private:
    // Add private members here
};

} // namespace audio

#endif // AUDIO_PROCESSOR_H