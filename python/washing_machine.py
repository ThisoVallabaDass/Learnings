
def calculate_washing_time(weight):
    
        weight = int(weight)

        # Calculate washing time based on weight
        if weight == 0:
            return "0 minutes"
        elif 0 < weight <= 2000:
            return "25 minutes"
        elif 2001 <= weight <= 4000:
            return "35 minutes"
        elif 4001 <= weight <= 7000:
            return "45 minutes"
        else:
            return "Invalid input"
    


weight = input("Enter the weight : ")
print(calculate_washing_time(weight))
