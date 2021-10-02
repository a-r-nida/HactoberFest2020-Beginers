class Father():
	def skills(self):
		print("Programming")
	
class Mother():
	def skills(self):
		print("cooking")
		
class Son(Father, Mother):
	def skills(self):
		Father.skills(self)
		Mother.skills(self)
		print("sports")
		
c = Son().skills()
