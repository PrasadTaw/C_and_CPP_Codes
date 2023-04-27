#include <bits/stdc++.h>
using namespace std;


// CLASS BUS  ===============================================
class Bus
{
private:
    int maxSeats, bookedSeats;
    double busFare;
    char busNo[20],source[20], destination[20], sourceTime[20], destinationTime[20];

public:
    Bus()
    {
       strcpy(busNo, "");
        maxSeats = 32;
        bookedSeats = 0;
        busFare = 0.0;
        strcpy(source, "");
        strcpy(destination, "");
        strcpy(sourceTime, "");
        strcpy(destinationTime, "");
    }

    // METHODS
    void addBus();
    void showAllBus();
    void showBusDetails();
    void viewBusDetails();
    void deleteBus();
    void editBus();

    // GETTERS
    char* getBusNo()
    {
        return busNo;
    }

    char* getSource()
    {

        return source;
    }

    char* getDestination()
    {
        return destination;
    }

    char* getSourceTime()
    {
        return sourceTime;
    }

    char* getDestinationTime()
    {
        return destinationTime;
    }

    int getBookedSeats()
    {
        return bookedSeats;
    }

    int getMaxSeats()
    {
        return maxSeats;
    }

    double getBusFare()
    {
        return busFare;
    }

    // SETTERS
    void setBookedSeats()
    {
        bookedSeats++;
    }

    void setCancelTicket()
    {
        bookedSeats--;
    }

    void setSource(char* s)
    {
        if (s && s[0])
            strcpy(source, s);
    }

    void setDestination(char* d)
    {
        if (d && d[0])
            strcpy(destination, d);
    }

    void setSourceTime(char* s)
    {
        if (s && s[0])
            strcpy(sourceTime, s);
    }

    void setDestinationTime(char* d)
    {
        if (d && d[0])
            strcpy(destinationTime, d);
    }

    void setBusFare(double f)
    {
        if (f)
            busFare = f;
    }
};

// CLASS TICKET  ===============================================
class Ticket
{
private:
    char name[20], pnrNo[12], date[20];
    Bus bus;

public:
    void generateTicket(char*, Bus);
    void displayTicket();
    void bookTicket();
    void cancelTicket();
    void editTicket();
    void showTicketsByPNR();
    void showTicketsByName();
    void showTicketsByBus();
    void showTicketsBySource();
    void showTicketsByDestination();
    void showAllTickets();

    // GETTERS
    char* getName()
    {
        return name;
    }

    char* getPnrNo()
    {
        return pnrNo;
    }

    char* getDate()
    {
        return date;
    }

    // SETTERS
    void setName(char* n)
    {
        if (n && n[0])
            strcpy(name, n);
    }
};
