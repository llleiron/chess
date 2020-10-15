#include <iostream>

int main()
{
	int xnav{}; //navi x coordinaty
	int ynav{}; //navi y coordinaty
	int xtag{}; //taguhu x coordinaty 
	int ytag{}; //taguhu y coordinaty
	int xdzi{}; //dziu x coordinaty
	int ydzi{}; //dziu y coordinaty

	int counter{}; //counter

	int checktagx{}; //taguhu x coordinatnery ankyunagceri hamar
	int checktagy{}; //taguhu y coordinatnery ankyunagceri hamar

	//dziu bolor hnaravor positionneri stexcum
	int positionx1{};
	int positiony1{};
	int positionx2{};
	int positiony2{};
	int positionx3{};
	int positiony3{};
	int positionx4{};
	int positiony4{};
	int positionx5{};
	int positiony5{};
	int positionx6{};
	int positiony6{};
	int positionx7{};
	int positiony7{};
	int positionx8{};
	int positiony8{};

	std::cout << "Mutqagrek navi coordinatnery bnakan tveri tesqov: "; //xndrum enq mutqagrel navi coordinatnery
	std::cin >> xnav >> ynav; //mutqagrvum en navaki coordinatnery

	//validation navi hamar
	while (xnav < 1
		|| xnav > 8
		|| ynav < 1
		|| ynav > 8) //while cikl navi validationneri hamar
	{
		std::cout << "Mutqagrman skhal, mutqagrek navi (x, y) coordinatnery krkin: ";//texekacum mutqagrman skhali masin
		std::cin >> xnav >> ynav; //nor navi(x, y) coordinatneri stacum
	}
	
	std::cout << "Mutqagrek taguhu coordinatnery bnakan tveri tesqov: "; //xndrum enq mutqagrel taguhu coordinatnery
	std::cin >> xtag >> ytag; //mutqagrvum en taguhu coordinatnery

	//validation taguhu hamar
	while (xtag < 1
		|| xtag > 8
		|| ytag < 1
		|| ytag > 8) //while cikl taguhu validationneri hamar
	{
		std::cout << "Mutqagrman skhal, mutqagrek taguhu(x, y) coordinatnery krkin: ";//texekacum mutqagrman skhali masin
		std::cin >> xtag >> ytag; //nor taguhu(x, y) coordinatneri stacum
	}

	std::cout << "Mutqagrek dziu coordinatnery bnakan tvery tesqov: "; //xnrum enq mutqagrel dziu coordinatnery
	std::cin >> xdzi >> ydzi; //mutqagrvum en dziu coordinatnery
	
	//validation dziu hamar
	while (xdzi < 1
		|| xdzi > 8
		|| ydzi < 1
		|| ydzi > 8) //while cikl dziu validationneri hamar
	{
		std::cout << "Mutqagrman skhal, mutqagrek dziu(x, y) coordinatnery krkin: ";//texekacum mutqagrman skhali masin
		std::cin >> xdzi>> ydzi; //nor dziu(x, y) coordinatneri stacum
	}
	//full validation
	while ((xnav == xtag && ynav == ytag)
		|| (xnav == xdzi && ynav == ydzi)
		|| (xtag == xdzi && ytag == ydzi))
	{
		std::cout << "Mutqagrman skhal, hertakanutyamb mutqagreq, navi(x, y), taguhu(x, y) ev dziu(x, y) coordinatnery: ";
		std::cin >> xnav >> ynav >> xtag >> ytag >> xdzi >> ydzi;
	}

	//dziu bolor hnaravor positionnery hashvum
	positionx1 = xdzi - 1;
	positiony1 = ydzi - 2;
	positionx2 = xdzi + 1;
	positiony2 = ydzi - 2;
	positionx3 = xdzi + 2;
	positiony3 = ydzi + 1;
	positionx4 = xdzi + 2;
	positiony4 = ydzi - 1;
	positionx5 = xdzi + 1;
	positiony5 = ydzi + 2;
	positionx6 = xdzi - 1;
	positiony6 = ydzi + 2;
	positionx7 = xdzi - 2;
	positiony7 = ydzi + 1;
	positionx8 = xdzi - 2;
	positiony8 = ydzi - 1;

	for (int i = 1; i <= 8; ++i) //for cikl #1 x coordinatneri arancqi hamar
	{
		for (int j = 1; j <= 8; ++j) //for cikl #2 y coordinatneri arancqi hamar
		{
			if ((i == xnav
				|| j == ynav)
				&& !(i == xnav && j == ynav)
				&& !(i == xtag && j == ytag)
				&& !(i == xdzi && j == ydzi)
				&& !(i == positionx1 && j == positiony1)
				&& !(i == positionx2 && j == positiony2)
				&& !(i == positionx3 && j == positiony3)
				&& !(i == positionx4 && j == positiony4)
				&& !(i == positionx5 && j == positiony5)
				&& !(i == positionx6 && j == positiony6)
				&& !(i == positionx7 && j == positiony7)
				&& !(i == positionx8 && j == positiony8)
				) // stugum vor vercni bolor chisht vandaknery navi hamar u hani henc navin dranc mejic + hani taguhun + hani dziun + hani dziu xpox vandaknery
			{
				counter += 1;
			}
			if ((i == xtag || j == ytag)
				&& !(i == xtag && j == ytag)
				&& !(i == xnav && j == ynav)
				&& !(i == xnav || j == ynav)
				&& !(i == xdzi && j == ydzi)
				&& !(i == positionx1 && j == positiony1)
				&& !(i == positionx2 && j == positiony2)
				&& !(i == positionx3 && j == positiony3)
				&& !(i == positionx4 && j == positiony4)
				&& !(i == positionx5 && j == positiony5)
				&& !(i == positionx6 && j == positiony6)
				&& !(i == positionx7 && j == positiony7)
				&& !(i == positionx8 && j == positiony8)) //stugum vor vercni bolor chisht vandaknery taguhu hamar  u hani henc taguhun dranc mejic + hani navin + hani navi vandaknery + dziun + dziu xpacnery
			{
				counter += 1;// counter + 1 veronshyal paymanneri true linelu depqum
			}
		}
	}
	
	checktagx = xtag - 1; //taguhu dzax verevi ankyunagci hamar x coordinati skzbnarjeqy
	checktagy = ytag - 1; //taguhu dzax verevi ankyunagci hamar y coordinati skzbnarjeqy

	while (checktagx >=1 && checktagy >= 1) //#1 while cikl taguhu dzax verevi ankyunagci hamar
	{
		if ((checktagx != xnav && checktagy != ynav)
			&& !(checktagx == xnav || checktagy == ynav)
			&& !(checktagx == xdzi && checktagy == ydzi)
			&& !(checktagx == positionx1 && checktagy == positiony1)
			&& !(checktagx == positionx2 && checktagy == positiony2)
			&& !(checktagx == positionx3 && checktagy == positiony3)
			&& !(checktagx == positionx4 && checktagy == positiony4)
			&& !(checktagx == positionx5 && checktagy == positiony5)
			&& !(checktagx == positionx6 && checktagy == positiony6)
			&& !(checktagx == positionx7 && checktagy == positiony7)
			&& !(checktagx == positionx8 && checktagy == positiony8)
			) // stugum vor taguhu dzax verevi ankyunagci coordinatnery chhamynknen navaki u navaki xpox dashteri coordinatneri het + dziu + dziu xpox
		{
			counter += 1; // counter + 1 veronshyal paymanneri true linelu depqum
		}
		--checktagx; //ancum taguhu dzax verevi ankyunagci myus x coordinatin
		--checktagy; //ancum taguhu dzax verevi ankyunagci myus y coordinatin
	}

	checktagx = xtag + 1; //taguhu aj nerqevi ankyunagci hamar x coordinati skzbnarjeqy
	checktagy = ytag + 1; //taguhu aj nerqevi ankyunagci haamr y coordinati skzbnarjeqy

	while (checktagx <= 8 && checktagy <=8) //#2 while cikl taguhu aj nerqevi ankyunagci hamar
	{
		if ((checktagx != xnav && checktagy != ynav)
			&& !(checktagx == xnav || checktagy == ynav)
			&& !(checktagx == xdzi && checktagy == ydzi)
			&& !(checktagx == positionx1 && checktagy == positiony1)
			&& !(checktagx == positionx2 && checktagy == positiony2)
			&& !(checktagx == positionx3 && checktagy == positiony3)
			&& !(checktagx == positionx4 && checktagy == positiony4)
			&& !(checktagx == positionx5 && checktagy == positiony5)
			&& !(checktagx == positionx6 && checktagy == positiony6)
			&& !(checktagx == positionx7 && checktagy == positiony7)
			&& !(checktagx == positionx8 && checktagy == positiony8)) // stugum vor taguhu aj nerqevi ankyunagci coordinatnery chhamynknen navaki u navaki xpox dashteri coordinatneri het + dziu het + dziu xpacneri het
		{
			counter += 1; // counter + 1 veronshyal paymanneri true linelu depqum

		}
		++checktagx; //ancum taguhu aj nerqevi ankyunagci myus x coordinatin
		++checktagy; //ancum taguhu aj nerqevi ankyunagci myus y coordinatin
	}

	checktagx = xtag + 1; //taguhu aj verevi ankyunagci hamar x coordinati skzbnarjeqy
	checktagy = ytag - 1; //taguhu aj verevi ankyunagci hamar y coordinati skzbnarjeqy

	while (checktagx <= 8 && checktagy >= 1) //#3 while cikl taguhu aj verevi ankyunagci hamar
	{
		if ((checktagx != xnav && checktagy != ynav)
			&& !(checktagx == xnav || checktagy == ynav)
			&& !(checktagx == xdzi && checktagy == ydzi)
			&& !(checktagx == positionx1 && checktagy == positiony1)
			&& !(checktagx == positionx2 && checktagy == positiony2)
			&& !(checktagx == positionx3 && checktagy == positiony3)
			&& !(checktagx == positionx4 && checktagy == positiony4)
			&& !(checktagx == positionx5 && checktagy == positiony5)
			&& !(checktagx == positionx6 && checktagy == positiony6)
			&& !(checktagx == positionx7 && checktagy == positiony7)
			&& !(checktagx == positionx8 && checktagy == positiony8)) // stugum vor taguhu aj verevi ankyunagci coordinatnery chhamynknen navaki u navaki xpox dashteri coordinatneri het + dziu het + dziu xpacneri het
		{
			counter += 1; // counter + 1 veronshyal paymanneri true linelu depqum
		}
		++checktagx; //ancum taguhu aj verevi ankyunagci myus x coordinatin
		--checktagy; //ancum taguhu aj verevi ankyunagci myus y coordinatin
	}

	checktagx = xtag - 1; //taguhu dzax nerqevi ankyunagci hamar x coordinati skzbnarjeqy
	checktagy = ytag + 1; //taguhu dzax nerqevi ankyunagci hamar y coordinati skzbnarjeqy

	while (checktagx >= 1 && checktagy <= 8) //#4 while cikl taguhu dzax nerqevi ankyunagci hamar
	{
		if ((checktagx != xnav && checktagy != ynav)
			&& !(checktagx == xnav || checktagy == ynav)
			&& !(checktagx == xdzi && checktagy == ydzi)
			&& !(checktagx == positionx1 && checktagy == positiony1)
			&& !(checktagx == positionx2 && checktagy == positiony2)
			&& !(checktagx == positionx3 && checktagy == positiony3)
			&& !(checktagx == positionx4 && checktagy == positiony4)
			&& !(checktagx == positionx5 && checktagy == positiony5)
			&& !(checktagx == positionx6 && checktagy == positiony6)
			&& !(checktagx == positionx7 && checktagy == positiony7)
			&& !(checktagx == positionx8 && checktagy == positiony8)) // stugum vor taguhu dzax nerqevi ankyunagci coordinatnery chhamynknen navaki u navaki xpox dashteri coordinatneri het + dziu het + dziu xpacneri het
		{
			counter += 1; // counter + 1 veronshyal paymanneri true linelu depqum
		}
		--checktagx; //ancum taguhu dzax nerqevi ankyunagci myus x coordinatin
		++checktagy; //ancum taguhu dzax nerqevi ankyunagci myus y coordinatin
	}

	//dziu xpely

	if (positionx1 >= 1
		&& positionx1 <= 8
		&& positiony1 >= 1
		&& positiony1 <= 8
		&& !(positionx1 == xnav && positiony1 == ynav)
		&& !(positionx1 == xtag && positiony1 == ytag)) //stugum vor dziu position1-y lini valid u chngni taguhu kam navaki vra
	{
		counter += 1;
	}

	if (positionx2 >= 1
		&& positionx2 <= 8
		&& positiony2 >= 1
		&& positiony2 <= 8
		&& !(positionx2 == xnav && positiony2 == ynav)
		&& !(positionx2 == xtag && positiony2 == ytag)) //stugum vor dziu position2-y lini valid u chngni taguhu kam navaki vra
	{
		counter += 1;
	}

	if (positionx3 >= 1
		&& positionx3 <= 8
		&& positiony3 >= 1
		&& positiony3 <= 8
		&& !(positionx3 == xnav && positiony3 == ynav)
		&& !(positionx3 == xtag && positiony3 == ytag)) //stugum vor dziu position3-y lini valid u chngni taguhu kam navaki vra
	{
		counter += 1;
	}

	if (positionx4 >= 1
		&& positionx4 <= 8
		&& positiony4 >= 1
		&& positiony4 <= 8
		&& !(positionx4 == xnav && positiony4 == ynav)
		&& !(positionx4 == xtag && positiony4 == ytag)) //stugum vor dziu position4-y lini valid u chngni taguhu kam navaki vra
	{
		counter += 1;
	}

	if (positionx5 >= 1
		&& positionx5 <= 8
		&& positiony5 >= 1
		&& positiony5 <= 8
		&& !(positionx5 == xnav && positiony5 == ynav)
		&& !(positionx5 == xtag && positiony5 == ytag)) //stugum vor dziu position5-y lini valid u chngni taguhu kam navaki vra
	{
		counter += 1;
	}

	if (positionx6 >= 1
		&& positionx6 <= 8
		&& positiony6 >= 1
		&& positiony6 <= 8
		&& !(positionx6 == xnav && positiony6 == ynav)
		&& !(positionx6 == xtag && positiony6 == ytag)) //stugum vor dziu position6-y lini valid u chngni taguhu kam navaki vra
	{
		counter += 1;
	}

	if (positionx7 >= 1
		&& positionx7 <= 8
		&& positiony7 >= 1
		&& positiony7 <= 8
		&& !(positionx7 == xnav && positiony7 == ynav)
		&& !(positionx7 == xtag && positiony7 == ytag)) //stugum vor dziu position7-y lini valid u chngni taguhu kam navaki vra
	{
		counter += 1;
	}

	if (positionx8 >= 1
		&& positionx8 <= 8
		&& positiony8 >= 1
		&& positiony8 <= 8
		&& !(positionx8 == xnav && positiony8 == ynav)
		&& !(positionx8 == xtag && positiony8 == ytag)) //stugum vor dziu position8-y lini valid u chngni taguhu kam navaki vra
	{
		counter += 1;
	}

	std::cout << counter; // counteri artacumy ekranin
}