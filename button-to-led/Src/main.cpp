#include "Model/Board.h"
#include "Model/Led.h"
#include "Model/Button.h"

using UserLed = Led<Board::GPIOA_BASE, 5> ;
using UserButton = Button<Board::GPIOC_BASE, 13>;

int main()
{
	UserLed::init();
	UserButton::init();

	while(1){
		if(UserButton::read()){
			UserLed::on();
		} else {
			UserLed::off();
		}
	}

	for(;;){

	}

}






