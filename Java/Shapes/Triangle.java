abstract class Triangle implements Shape {
    public double numberOfSides() {
        return 3;
    }

    public void shapeName() {
        System.out.println("Triangle");;
    }

    public abstract double area();
}
