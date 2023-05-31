#include "./Cars.cpp"

////////////// get out ////////////////////
void getOut()
{
    cout << "Get out you are not authorized" << endl;
}
////////////// constructer ////////////////////
Cars::Cars()
{
    try
    {
        cout << "-----------------Welcome To Parking System----------------" << endl;
    }
    catch (string error)
    {
        cout << error << endl;
    }
}

////////////// initializtion ////////////////////
void Cars::initialization()
{
    try
    {
    m:
        cout << endl
             << endl
             << "Are you Admin" << endl
             << "1) Yes" << endl
             << "2) No" << endl;
        cin >> Check;
        if ((Check == 1 || (Check == 2)))
        {
            switch (Check)
            {
            case 1:
                admin();
                break;
            case 2:
                getOut();
                break;

            default:
                break;
            }
        }
        else
        {
            cout << "Invalid choice....." << endl
                 << " try again " << endl;
            goto m;
        }
    }
    catch (string error)
    {
        cout << error << endl;
    }
}

////////////// authenticate  ////////////////////
bool Cars::authenticate()
{
    cout << "Enter your name" << endl;
    cin >> Name;
    cout << "Enter your Password" << endl;
    cin >> Password;
    if (Name == "Admin" && Password == "Boss")
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

////////////// admin  ////////////////////
void Cars::admin()
{
    if (authenticate() == 1)
    {
        cout << "Add total cars capacity in numbers" << endl;
        cin >> totalCarsCapacity;

        cout << "Add total bikes capacity in numbers" << endl;
        cin >> totalBikesCapacity;

        cout << "Add total rickshaws capacity in numbers" << endl;
        cin >> totalRickshawCapacity;
        totalSpaceAvailable = totalCarsCapacity + totalBikesCapacity + totalRickshawCapacity;
        cout << "Total vehicles space is: " << totalSpaceAvailable;
        custumer();
    }
    else
    {
        cout << "Invalid credentials" << endl;
        getOut();
        exit(1);
    }
}

////////////// custumer ////////////////////
void Cars::custumer()
{
a:
    while (true)
    {
        cout << endl
             << endl
             << "Enter your vechicle category" << endl
             << "1) Car" << endl
             << "2) Bike" << endl
             << "3) RickShaw" << endl
             << "4) Exit" << endl;
        cin >> category;
        switch (category)
        {
        case 1:
            cars();
            break;
        case 2:
            bikes();
            break;
        case 3:
            rickShaws();
            break;
        case 4:
            exit(1);
            break;

        default:
            cout << "invalid choice" << endl
                 << "try again" << endl;
            goto a;
            break;
        }
    }
}

////////////// cars ////////////////////
void Cars::cars()
{
    --totalCarsCapacity;
    --totalSpaceAvailable;
    cout << "Total Cars Space left is: " << totalCarsCapacity << endl;
    cout << "and Total  Space left is: " << totalSpaceAvailable << endl;
}

////////////// bikes ////////////////////
void Cars::bikes()
{
    --totalBikesCapacity;
    --totalSpaceAvailable;
    cout << "Total Bikes Space left is: " << totalBikesCapacity << endl;
    cout << "and Total  Space left is: " << totalSpaceAvailable << endl;
}

////////////// rickshaws ////////////////////
void Cars::rickShaws()
{
    --totalRickshawCapacity;
    --totalSpaceAvailable;
    cout << "Total Rickshaws Space left is: " << totalRickshawCapacity << endl;
    cout << "and Total  Space left is: " << totalSpaceAvailable << endl;
}