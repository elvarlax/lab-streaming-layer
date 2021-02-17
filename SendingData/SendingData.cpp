#include "lsl_cpp.h"
using namespace lsl;

/* This is an example of how a simple data stream can be offered on the network.
 * Here, the stream is named SimpleStream, has content-type EEG, and 128 channels.
 * The transmitted samples contain random numbers (and the sampling rate is irregular
 * and effectively bounded by the speed at which the program can push out samples).
 */

int main(int argc, char* argv[]) {
	const size_t size = 128;

	// make a new stream_info (128ch) and open an outlet with it
	stream_info info("SimpleStream", "EEG", size);
	stream_outlet outlet(info);

	// send data forever
	float sample[size]{};

	while (true) {
		// generate random data
		for (int i = 0; i < size; i++) {
			sample[i] = (rand() % 1500) / 500.0 - 1.5;
		}
		// send it
		outlet.push_sample(sample);
	}

	return 0;
}