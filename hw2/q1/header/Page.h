#pragma once
#include <string>

class Page 
{
private:
	std::string _posts;
	std::string _status;
public:
	void init();
	std::string getPosts() const;
	std::string getStatus() const;
	void clearPage();
	void setStatus(const std::string &status);
	void addLineToPosts(const std::string &new_line);

};