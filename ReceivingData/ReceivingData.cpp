#include "lsl_cpp.h"
#include <iostream>
using namespace std;
using namespace lsl;

/* This is a minimal example that demonstrates how a multi-channel stream (here 128ch)
 * of a particular name (here: SimpleStream) can be resolved into an inlet, and how the
 * raw sample data & time stamps are pulled from the inlet.
 */

int main(int argc, char* argv[]) {
	// resolve the stream of interest & make an inlet to get data from the first result
	vector<stream_info> results = resolve_stream("name", "SimpleStream");
	stream_inlet inlet(results[0]);

	// receive data & time stamps forever (not displaying them here)
	float sample[128]{};

	while (true) {
		double ts = inlet.pull_sample(&sample[0], 128);
		cout << "Data recieved: " << ts << endl;
	}

	return 0;
}