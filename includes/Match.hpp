#ifndef MATCH_HPP
#define MATCH_HPP

#include "Refree.hpp"
#include "Team.hpp"
#include <stdexcept>
#include <string>

class Match
{
	private:
		int id;
		static int _count;
		Refree	_ref;
		Team	_teams[2];
		int	_score[2];

	public:
		Match(Refree const& ref);

		void	setRefree(Refree const& ref);
		void	setTeams(Team t1, Team t2);
		void	setScore(int t1, int t2);
		void setId(int n);
		void setCount(int n);

		Refree	getRef() const;
		Team	getTeamByNb(int nb) const;

		int	getScore(Team t) const;
		int	getScore(int n) const;
		std::string	getScore() const;
		int getId();

// ** EXCEPTIONS ** //

		class MatchException : public std::runtime_error
		{
			private:
				MatchException const& operator=(MatchException const&) throw();
				MatchException() throw();

			public:
				MatchException(std::string const& errorMsg) throw();
				~MatchException() throw();
				virtual const char*	what() const throw();
		};
};

#endif
