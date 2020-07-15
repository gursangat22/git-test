.PHONY: clean All

All:
	@echo "----------Building project:[ letusc++ - Debug ]----------"
	@cd "letusc++" && "$(MAKE)" -f  "letusc++.mk"
clean:
	@echo "----------Cleaning project:[ letusc++ - Debug ]----------"
	@cd "letusc++" && "$(MAKE)" -f  "letusc++.mk" clean
