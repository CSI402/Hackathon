#include <stdio.h>


int main(int argc, char *argv[]){

  int option = 0;
  char flightData[];
  char airportName[];

  printf("What would you like to do?\n [1] Input data \n[2] Print data of all fl
ights\n[3]Print number of inbound flights for airport x\n[4]Print the number of
inbound flights for each airport\n[5]Print list of origin airports based on inbo
und flights\n[6]Print list of origin airports that have at least 2 flights that
have a departure time earlier than noon\n");

  scanf("%d", &option);

  if (option == 1){
    printf("Enter flight data filename:\n");
    scanf("%s", &flightData);
    insertFlightData(flightData);
  }
  else if(option == 2){
    printAllFlightData();
  }
  else if(option == 3){
    printf("Input name of airport you would like data for:\n");
    scanf("%s", &airportName);
    printAirportData(airportName);
  }
  else if(option == 4){
    printInboundFlights();
  }

  else if(option == 5){
    printListOfAirports();
  }
  else if(option == 6){
    printEarlierThanNoon();
  }
}
