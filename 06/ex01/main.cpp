#include "Serializer.hpp"

int main (void) {
	Data *data = new Data;
	Data *ret;

	data->num = 8;
	data->str = "string";
	data->c = 'C';
	data->f = 42.42f;
	data->d = 24.24;

	ret = Serializer::deserialize(Serializer::serialize(data));
	
	std::cout << "--------DATA-------\n";
	std::cout << data->num << std::endl;
	std::cout << data->str << std::endl;
	std::cout << data->c << std::endl;
	std::cout << data->f << std::endl;
	std::cout << data->d << std::endl;

	std::cout << "--------DESERIALIZED--------\n";
	std::cout << ret->num << std::endl;
	std::cout << ret->str << std::endl;
	std::cout << ret->c << std::endl;
	std::cout << ret->f << std::endl;
	std::cout << ret->d << std::endl;

	std::cout << "DATA ADDRESS: " << data << std::endl;
	std::cout << "'RET' ADDRESS: " << ret << std::endl;
	if (data == ret)
		std::cout << "Success!\n";
	delete data;
}