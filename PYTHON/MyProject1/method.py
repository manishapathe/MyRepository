class mydate:
    def __init__(self,d,m,y):
        self.day=d
        self.month=m
        self.year=y

     #factory methods
    #it is used to creat object
    @classmethod
    def from_string(cls,s1):
        d,m,y=map(int,s1.split('-'))
        date1=cls(d,m,y)
        return date1
    @staticmethod
    def is_valid_date(s1):
        d,m,y=map(int,s1.split('-'))
        if(d>=1 and d<=31)and(m>=1 and m<=12):
            return True
        else:
            return False
    def show(self):
        print(self.day,self.month,self.year)




d1=mydate(1,12,2021)
d2=mydate.from_string("2-12-2021")
d1.show()
d2.show()
if mydate.is_valid_date("4-12-2021"):
    print("valid date")
else:
    print("invalid date")