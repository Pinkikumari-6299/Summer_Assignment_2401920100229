abstract class Compartment {
    public abstract String notice();
}

class FirstClass extends Compartment {
    public String notice() {
        return "This is First Class";
    }
}

class Ladies extends Compartment {
    public String notice() {
        return "This is Ladies Compartment";
    }
}

class General extends Compartment {
    public String notice() {
        return "This is General Compartment";
    }
}

class Luggage extends Compartment {
    public String notice() {
        return "This is Luggage Compartment";
    }
}