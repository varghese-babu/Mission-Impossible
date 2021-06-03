class Reader:
    def __init__(self,number):
        self.number=number
        self.type="Reader"
    def __repr__(self):
        return str(f"Reader{self.number}")
    def __str__(self):
        return str(f"Reader{self.number}")

class Writer:
    def __init__(self,number):
        self.number=number
        self.type="Writer"
    def __repr__(self):
        return str(f"Writer{self.number}")
    def __str__(self):
        return str(f"writer{self.number}")

global count 
global shared 
count = 0 
shared = [] 

while(1):
    command = input() 
    if(command == "read"): 
        if(len(shared)==0 or shared[0].type=="Reader"): 
            count +=1 
            shared.append(Reader(count)) 
        else: 
            print("Please wait for writer to finish writing\n") 
    elif(command == "write"): 
        if(len(shared)==0): 
            count = 1 
            shared.append(Writer(count)) 
        else: 
            print("Another reader/writer is currently using the shared location\n") 
    elif(command=="show"): 
        for i in shared: 
            print(i,end=", ")
            print() 
    elif(command=="remove"): 
        del shared[0] 
    elif(command=="exit"): 
        break 
    else: print("Invalid command\n")
