#
#  Exemple de Makefile
#  Eric Lecolinet - Reda Dehak - Telecom ParisTech 2013
#  INF224 - TP C++ - http://www.telecom-paristech.fr/~elc/inf224
# 

# Nom du programme
PROG=myprog

# Fichiers sources (NE PAS METTRE les .h mais seulement les .cpp)
SOURCES=MyClass.cpp main.cpp

# Fichiers objets (ne pas modifier, sauf si l'extension n'est pas .cpp)
OBJETS=${SOURCES:%.cpp=%.o}

# Compilateur C++
# suivant les systemes c'est CXX ou CCC => on initialise les deux
CXX= c++
CCC= ${CXX}

# Options du compilateur C++
# -g pour debugger, -O optimise, -Wall affiche les erreurs, -I pour les headers
# Exemple pour Qt: CXXFLAGS= -g -Wall -I/usr/local/qt/include
CXXFLAGS= -g -Wall
CCFLAGS= ${CXXFLAGS}

# Options de l'editeur de liens
LDFLAGS= 

# Librairies a utiliser
# Exemple pour Qt: LDLIBS = -L/usr/local/qt/lib -lqt
LDLIBS= 


##########################################

# Regles de construction/destruction des .o et de l'executable
# (depend sera un fichier contenant les dependances)

all: ${PROG}

${PROG}: depend-${PROG} ${OBJETS}
	${CXX} -o $@ ${LDFLAGS} ${OBJETS} ${LDLIBS}

clean:
	-@$(RM) *.o depend-${PROG} core 1>/dev/null 2>&1

clean-all: clean
	-@$(RM) ${PROG} 1>/dev/null 2>&1
  
# Gestion des dependances : creation automatique des dependances en utilisant 
# l'option -MM de gcc (attention certains compilos n'ont pas cette option)

depend-${PROG}:
	${CXX} -MM ${SOURCES} > depend-${PROG}

###########################################

# Regles implicites

.SUFFIXES: .cpp .cxx .cc .C .c

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.c.o:
	$(CC) -c (CFLAGS) $(INCPATH) -o $@ $<


#############################################

# Inclusion du fichier des dependances
-include depend-${PROG}
