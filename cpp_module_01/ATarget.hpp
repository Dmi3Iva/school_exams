#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>
#include "ASpell.hpp"

class ATarget
{
	public:
		ATarget();
		ATarget(std::string name, std::string effects);
		virtual ~ATarget();
		ATarget(ATarget const &aspell);
		ATarget &operator=(ATarget const &aspell);

		ATarget *clone() const = 0;
		std::string &getType() const;

		void getHitBySpell(const *ASpell aspell) const;


	protected:
		std::string type;
};

#endif
