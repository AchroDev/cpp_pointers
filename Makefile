.PHONY: clean All

All:
	@echo "----------Building project:[ cpp_pointers - Debug ]----------"
	@"$(MAKE)" -f  "cpp_pointers.mk"
clean:
	@echo "----------Cleaning project:[ cpp_pointers - Debug ]----------"
	@"$(MAKE)" -f  "cpp_pointers.mk" clean
