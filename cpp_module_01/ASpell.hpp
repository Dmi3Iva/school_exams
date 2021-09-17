#ifndef ASPELL_HPP
#define ASPELL_HPP

class ASpell
{
	public:
		ASpell();
		ASpell(std::string name, std::string effects);
		virtual ~ASpell();
		ASpell(ASpell const &aspell);
		ASpell &operator=(ASpell const &aspell);

		ASpell *clone() const = 0;
		std::string getName() const;
		std::string getEffects() const;
		void launch(ATarget const & atarget) const;


	protected:
		std::string name;
		std::string effects;
};


#endif
