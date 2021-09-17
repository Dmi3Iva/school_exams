#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <string>
#include <iostream>


class Warlock {

	public: 
		Warlock(std::string name, std::string title);
		Warlock(const Warlock &warlock);

		std::string getName() const;
		std::string getTitle() const;
		void setTitle(const std::string &str);
		~Warlock();
		void introduce() const;
		
	private:
		Warlock();
		Warlock &operator = (const Warlock &warlock);
		std::string _name;
		std::string _title;
};

#endif
