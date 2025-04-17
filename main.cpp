#include <iostream>

using namespace std;

int main() {
	//1. Пользователь вводит с клавиатуры время в секундах.Перевести это значение в дни, часы, минуты и секунды.
	int secondsInput;
	cout << "Enter the number of seconds: ";
	cin >> secondsInput;
	cout << "Number in minuts = " << secondsInput / 60 << endl;
	cout << "Number in hours = " << secondsInput / 60 / 60 << endl;
	cout << "Number in days = " << secondsInput / 60 / 60 / 24 << endl;
	////2. Выполнить задачу, обратную предыдущей задаче.
	int daysInput, hoursInput, minutsInput;
	cout << "Enter the number of days: ";
	cin >> daysInput;
	cout << "Enter the number of hours: ";
	cin >> hoursInput;
	cout << "Enter the number of minuts: ";
	cin >> minutsInput;
	cout << "From days to seconds = " << daysInput * 24 * 60 * 60 << endl;
	cout << "From hours to seconds = " << hoursInput * 60 * 60 << endl;
	cout << "From minuts to seconds = " << minutsInput * 60 << endl;
	////3. Пользователь вводит с клавиатуры расстояние до аэропорта и время, за которое нужно доехать. Вычислить скорость, с которой ему нужно ехать.
	int distanceAirportInput, timeInput;
	cout << "Enter the distance to the airport: ";
	cin >> distanceAirportInput;
	cout << "Enter the time: ";
	cin >> timeInput;
	cout << (double)distanceAirportInput / timeInput << "km per " << (double)timeInput / distanceAirportInput << " time" << endl;
	////4. Пользователь вводит с клавиатуры время начала и время завершения телефонного разговора (часы, минуты и секунды). Посчитать стоимость разговора, если стоимость минуты составляет 30 копеек.
	cout << "Enter the number of seconds: ";
	cin >> secondsInput;
	cout << "Enter the number of minuts: ";
	cin >> minutsInput;
	cout << "Enter the number of hours: ";
	cin >> hoursInput;
	cout << "Cost of conversation is " << (secondsInput * 0.5) + (minutsInput * 30) + (hoursInput * 1800) << " coins" << endl;
	//5. Пользователь вводит с клавиатуры сумму в гривнах и курс доллара, евро и рубля. Посчитать, сколько пользователь сможет купить долларов, евро и рублей. 
	//При этом количество долларов, евро и рублей должно быть целым. Дополнительно вывести на экран сдачу в гривнах.
	int exchangeRate, hryvniaInput;
	cout << "Enter the amount in hryvnia: "; //Dollars
	cin >> hryvniaInput;
	cout << "Enter the cost of one dollar in hryvnia: ";
	cin >> exchangeRate;
	cout << "Hryvnia to dollars: " << hryvniaInput / exchangeRate << endl;
	cout << "Remaining hryvnia: " << hryvniaInput % exchangeRate << endl;
	cout << "Enter the amount in hryvnia: "; //Euro
	cin >> hryvniaInput;
	cout << "Enter the cost of one euro in hryvnia: ";
	cin >> exchangeRate;
	cout << "Hryvnia to euros: " << hryvniaInput / exchangeRate << endl;
	cout << "Remaining hryvnia: " << hryvniaInput % exchangeRate << endl;
	cout << "Enter the amount in hryvnia: "; //Roubles
	cin >> hryvniaInput;
	cout << "Enter the cost of one hryvnia in roubles: ";
	cin >> exchangeRate;
	cout << "Hryvnia to roubles: " << hryvniaInput * exchangeRate << endl;
	//6. Пользователь вводит с клавиатуры время в секундах, прошедшее с начала рабочего дня. Посчитать, сколько целых часов ему осталось сидеть на работе, если рабочий день составляет 8 часов
	cout << "Enter seconds proshedshih s nachala work day: ";
	cin >> secondsInput;
	cout << "Until the end of the working day " << (28800 - secondsInput) / 60 / 60 << " hours" << endl;
	//7. Пользователь вводит с клавиатуры стоимость одного ноутбука, их количество и процент скидки. Посчитать общую сумму заказа.
	int priceLaptop, amountLaptops, laptopDiscount, totalPriceLaptops;
	cout << "Enter price of one laptop: ";
	cin >> priceLaptop;
	cout << "Enter amount laptops: ";
	cin >> amountLaptops;
	totalPriceLaptops = priceLaptop * amountLaptops;
	cout << "Enter discount: ";
	cin >> laptopDiscount;
	cout << "Total order amount = " << totalPriceLaptops - (double)totalPriceLaptops / 100 * laptopDiscount << endl;
	//8. Зарплата менеджера составляет 100$+5% от продаж. Пользователь вводит с клавиатуры общую сумму сделок менеджера за месяц. Посчитать итоговую зарплату менеджера.
	int salesAmount;
	cout << "Enter the sales amount for the month: ";
	cin >> salesAmount;
	cout << "Manager's salary = " << 100 + (double)salesAmount / 100 * 5 << "$" << endl;
	//9. Пользователь вводит с клавиатуры размер одного фильма в гигабайтах и скорость Интернет - соединения в битах в секунду.
	//Определить, за какое время(часы, минуты и секунды) скачается фильм.
	int amountGigabytes, speedInternet, bitSeconds;
	cout << "Enter the movie size in gigabytes: ";
	cin >> amountGigabytes;
	cout << "Enter speed internet: ";
	cin >> speedInternet;
	bitSeconds = amountGigabytes * 8000000000 / speedInternet;
	cout << "So many seconds to download a movie " << bitSeconds << endl;
	cout << "So many minuts to download a movie " << bitSeconds / 60 << endl;
	cout << "So many hours to download a movie " << bitSeconds / 60 / 60 << endl;
	/*10. Пользователь вводит с клавиатуры объем флешки в гигабайтах.Посчитать, сколько на нее поместится фильмов размером 760 Мбайт.*/
	int amountfleshkaGigabytes;
	cout << "Enter the capacity of your flash drive: ";
	cin >> amountfleshkaGigabytes;
	cout << "Your flash drive can hold " << amountfleshkaGigabytes * 1000 / 760 << " films" << endl;
	//11. Пользователь вводит с клавиатуры дробное число.Округлить его до двух знаков после запятой и вывести на экран.
	double numNujnoOkruglit;
	cout << "Enter float num: ";
	cin >> numNujnoOkruglit;
	printf("Eshkere num: %.2f\n", numNujnoOkruglit);
	/*12. Пользователь вводит с клавиатуры количество студентов, сдавших экзамен, и количество «должников».
	Посчитать, сколько процентов составляют «должники» от общего числа студентов, а также, сколько процентов составляют студенты, сдавшие экзамен.*/
	int sdaliExamen, doljniki, totalStudents;
	cout << "Enter amount students sdavshih examen: ";
	cin >> sdaliExamen;
	cout << "Enter amount doljnikov: ";
	cin >> doljniki;
	totalStudents = sdaliExamen + doljniki;
	cout << "Doljniki: " <<(double)doljniki / totalStudents * 100 << "%" << endl;
	cout << "Sdali examen: " << (double)sdaliExamen / totalStudents * 100 << "%" << endl;
	/*13. Пользователь вводит с клавиатуры время в секундах, прошедшее с начала дня. Определить, сколько времени(часов, минут и секунд) осталось до полуночи.*/
	int secondsSoStartaDay;
	cout << "Enter seconds proshedshie so starta dnya: ";
	cin >> secondsSoStartaDay;
	cout << "Hours do end dnya - " << (86400 - secondsSoStartaDay) / 60 / 60 << endl;
	cout << "Minuts do end dnya - " << (86400 - ((86400 - secondsSoStartaDay) / 60 / 60 * 3600 + secondsSoStartaDay)) / 60 << endl;
	cout << "Seconds do end dnya - " << (86400 - ((86400 - secondsSoStartaDay) / 60 / 60 * 3600 + secondsSoStartaDay)) % 60 << endl;
	/*14. Пользователь вводит с клавиатуры объем одного фильма в гигабайтах.Посчитать, сколько дискет понадобится для переноса фильма на другой компьютер(размер дискеты считать равным 1.44 Мбайт).*/
	double filmGigabytes, filmMegabytes;
	cout << "Enter size film in gigabytes: ";
	cin >> filmGigabytes;
	filmMegabytes = filmGigabytes * 1024;
	cout << "Vot stolto need disket " << (int)(filmMegabytes / 1.44 + 0.999) << endl;
	//15. Пользователь вводит с клавиатуры сумму в гривнах, срок вклада в месяцах и процентную ставку за год.Посчитать, сколько денег будет у пользователя.
	double summaVkladaBank, stavkavProcentah;
	int srokVkladaBank;
	cout << "Enter summa vklada: ";
	cin >> summaVkladaBank;
	cout << "Enter srok vklada: ";
	cin >> srokVkladaBank;
	cout << "Enter procent stavka: ";
	cin >> stavkavProcentah;
	cout << "Total summa pod end sroka: " << (double)summaVkladaBank + (summaVkladaBank * (stavkavProcentah / 100) * srokVkladaBank / 12) << " hryvnia" << endl;
	return 0;
}