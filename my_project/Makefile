.PHONY: test-watch

test-watch:
	reflex -r '\.cc$$' -d none -s -- sh -c "cd ./build && make && TERM=xterm-256color ./hello_test" 
