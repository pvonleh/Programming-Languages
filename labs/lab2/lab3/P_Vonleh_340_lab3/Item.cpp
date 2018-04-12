#include "Item.hpp"

Item::Item(std::string name, std::string description){
	this->name = name;
	this->description = description;
}

std::string Item::GetName(){
	return this->name;
}

std::string Item::GetDescription(){
	return this->description;
}

void Item::PrintData(){
	std::cout<<this->name<<"\t"<<this->description<<std::endl;
}