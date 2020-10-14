package mooc.vandy.java4android.buildings.logic;

/**
 * This is the House class file that extends Building.
 */
public class House
       extends Building {

    // TODO - Put your code here.
    private String mOwner;
    private boolean mPool;

    //constructors
    public House(int length, int width, int lotLength, int lotWidth){
        super(length,width,lotLength,lotWidth);
        setOwner("n/a");
    }
    public House(int length, int width, int lotLength, int lotWidth, String owner) {
        super(length,width,lotLength,lotWidth);
        setOwner(owner);
    }
    public House(int length, int width, int lotLength, int lotWidth, String owner, boolean pool) {
        super(length,width,lotLength,lotWidth);
        setOwner(owner);
        setPool(pool);
    }

    //methods
    public String getOwner(){
        return mOwner;
    }
    public boolean hasPool() {
        return mPool;
    }
    public void setOwner(String owner) {
        mOwner = owner;
    }
    public void setPool( boolean pool) {
        mPool = pool;
    }
    public String toString() {
        String s = "Owner: "+getOwner();
        if( hasPool() ) s += "; has a pool";
        if( 2*super.calcBuildingArea() < super.calcLotArea() ) s += "; has a big open space";
        return s;
    }
    public boolean equals( Object object) {
        House obj = (House) object;
        return (calcBuildingArea() == obj.calcBuildingArea() && (hasPool() == obj.hasPool()));
    }
}
