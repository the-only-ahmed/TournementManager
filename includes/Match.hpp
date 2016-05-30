#ifndef MATCH_HPP
#define MATCH_HPP

#include "Referee.hpp"
#include "Team.hpp"
#include <stdexcept>
#include <string>

class Match
{
	private:
		int id;
		static int _count;
		Referee	_ref;
		Team	_teams[2];
		int	_score[2];

	public:
		Match(Referee const& ref);

		void					setReferee(Referee const& ref);
		void					setTeams(Team t1, Team t2);
		void					setScore(int t1, int t2);
		void 					setId(int n);
		static void 	setCount(int n);

		Referee				getRef() const;
		Team					getTeamByNb(int nb) const;

		int						getScore(Team t) const;
		int						getScore(int n) const;
		int 					getId() const;
		std::string		getScore() const;
		static int		getCount();

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
