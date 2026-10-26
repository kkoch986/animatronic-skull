#ifndef VIDEO_PROCESSOR_H
#define VIDEO_PROCESSOR_H

#include <iostream>

namespace video {

class VideoProcessor {
public:
    VideoProcessor();
    ~VideoProcessor();
    
    void process();
    void initialize();
    
private:
    // Add private members here
};

} // namespace video

#endif // VIDEO_PROCESSOR_H