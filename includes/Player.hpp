#ifndef PLAYER_H
#define PLAYER_H

class Player{
	public:
		Player();

		void setMoney(int);
		void setEggs(int);
		void setWin(bool);

		int getMoney();
		int getEggs();
		bool isWin();


	private:
		int money;
		int eggs;
		bool win;
};

#endif