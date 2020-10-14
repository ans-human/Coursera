package mooc.vandy.java4android.buildings.logic;

/**
 * This is the office class file, it is a subclass of Building.
 */
public class Office
       extends Building {

    // TODO - Put your code here.
    private String mBusinessName;
    private int mParkingSpaces = 0;
    private static int sTotalOffices = 0;

    //methods
    public Office(int length, int width, int lotLength, int lotWidth){
        super( length, width, lotLength, lotWidth);
        sTotalOffices++;
    }
    public Office(int length, int width, int lotLength, int lotWidth, String businessName){
        super( length, width, lotLength, lotWidth);
        setBusinessName(businessName);
        sTotalOffices++;
    }
    public Office(int length, int width, int lotLength, int lotWidth, String businessName, int parkingSpaces){
        super( length, width, lotLength, lotWidth);
        setBusinessName(businessName);
        setParkingSpaces(parkingSpaces);
        sTotalOffices++;
    }
    public String getBusinessName(){
        return mBusinessName;
    }
    public int getParkingSpaces(){
        return mParkingSpaces;
    }
    public static int getTotalOffices(){
        return sTotalOffices;
    }
    public void setBusinessName(String BusinessName){
        mBusinessName = BusinessName;
    }
    public void setParkingSpaces(int parkingSpaces){
        mParkingSpaces = parkingSpaces;
    }
    public String toString(){
        String s = "Business: ";
        if( getBusinessName() == null ) s += "unoccupied";
        else s += getBusinessName();
        if( getParkingSpaces() > 0 ) s += "; has " + getParkingSpaces() + " parking spaces";
        s += " (total offices: " + getTotalOffices() + ")";
        return s;
    }
    public boolean equals(Object object){
        Office obj = (Office) object;
        return super.calcBuildingArea() == obj.calcBuildingArea() && getParkingSpaces() == obj.getParkingSpaces();
    }

}
