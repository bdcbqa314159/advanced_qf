dependency:
	cd build && cmake .. --graphviz=graph.dot && dot -Tpng graph.dot -o graph_image.png

prepare:
	rm -rf build
	mkdir build
