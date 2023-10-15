dependency:
	cd build && cmake .. && make

prepare:
	rm -rf build
	mkdir build

equity:
	cd build/app && ./executable_equity
