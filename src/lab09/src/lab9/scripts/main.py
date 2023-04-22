class koch_employee:

    def __init__(self, p_name):
        self.name = p_name
        self.position = "Networks Developer Intern"
        self.productivity = []
        self.values = {}
        self.intelligence = null
        self.loyalty = int[1, 2, 3, 4, 5]
        self.technology_skillset = int[1, 2, 3, 4, 5]
        self.salary = bool(input("30 hour?"))

        def responsibilities(self, p_position):
        if p_position == "Networks Developer Intern":
            print("You will be responsible for the following:")
            roles = ["1.  Will be responsible for the following...\n", "1.  Work with security team to perform tests and uncover vulnterabilities.\n",
                   "2.  Providing recommendations to improve cypersecurity posture going forward.\n", "3.  Participate in creating Information Security policies, standards, procedures, best practices, and provide guidance on applying them to the enviroment\n", "4.  Continue to quickly learn new systems and products based on business needs\n", "5.  Work on a team of execute project deliverables\n", "6.  Creating status reports, customer reports, and presentations\n", "7.  Assist others in remediating vulnterabilities to maintain a high-secuirty standard."]
            for i in roles:
                print(i)
        elif throw Exception("Invalid Position"):


def trust(boolean, name):
    if boolean == True:
        koch_employee = koch_employee("Morgan Bergen")
        koch_employee.responsibilies(koch_employee.status)
        return (True);
	else:
		kock_employee = koch_employee("different human")
		return (False)


def main():

    the_decision = input(
        "Do you believe that this employee is a good fit for the position?")

    if the_decision == "yes":
		trust(True, "Morgan Bergen")
		print("Welcome to Koch Industries")
		try:
			koch_employee.responsibilities(koch_employee.position)
		except Exception as e:
            print(e)
			break
    elif (the_decision == "no"):
        print("Thank you for your time, but we will be moving on to the next candidate.")

    
if __name__ == "__main__":
    main()