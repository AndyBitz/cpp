#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
#include <chrono>

/*
 *
 *
 *
 */
void call_from_thread() {
	static int counter = 0;				// static counter to distinguish threats
	static std::mutex output_mutex;		// mutex to keep std::cout clean

	// let some time pass
	std::this_thread::sleep_for(std::chrono::seconds(2));

	// every thing after the next line will be executed sequential
	std::lock_guard<std::mutex> guard(output_mutex);
	std::cout << "\r" << "hello world @ " << counter++ << std::endl;
}

/*
 *
 *
 *
 */
int main(int argc, char **argv) {

	// vector to store dynamic amount of threads
	std::vector<std::thread> t;

	// generate threads
	for (int i=0; i < 10; i++) {
		t.push_back(std::thread(call_from_thread));
	}

	// run threads
	for (int i=0; i < 10; i++) {
		t.at(i).join();
	}

	// delete vector with threads
	t.clear();

	return 0;
}