#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=MinGW-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/LinearListArray.o \
	${OBJECTDIR}/LinearListLinkedList.o \
	${OBJECTDIR}/MaxSubArray3.o \
	${OBJECTDIR}/MaxSubArray4.o \
	${OBJECTDIR}/MaximumSubsequenceSum.o \
	${OBJECTDIR}/PolynomialArray.o \
	${OBJECTDIR}/PolynomialLinkedList.o \
	${OBJECTDIR}/QueueArray.o \
	${OBJECTDIR}/QueueArrayCircular.o \
	${OBJECTDIR}/QueueArrayFrontRear.o \
	${OBJECTDIR}/StackArray.o \
	${OBJECTDIR}/StackLinkedList.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/zjumooc.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/zjumooc.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/zjumooc ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/LinearListArray.o: LinearListArray.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/LinearListArray.o LinearListArray.cpp

${OBJECTDIR}/LinearListLinkedList.o: LinearListLinkedList.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/LinearListLinkedList.o LinearListLinkedList.cpp

${OBJECTDIR}/MaxSubArray3.o: MaxSubArray3.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MaxSubArray3.o MaxSubArray3.cpp

${OBJECTDIR}/MaxSubArray4.o: MaxSubArray4.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MaxSubArray4.o MaxSubArray4.cpp

${OBJECTDIR}/MaximumSubsequenceSum.o: MaximumSubsequenceSum.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/MaximumSubsequenceSum.o MaximumSubsequenceSum.cpp

${OBJECTDIR}/PolynomialArray.o: PolynomialArray.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PolynomialArray.o PolynomialArray.cpp

${OBJECTDIR}/PolynomialLinkedList.o: PolynomialLinkedList.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/PolynomialLinkedList.o PolynomialLinkedList.cpp

${OBJECTDIR}/QueueArray.o: QueueArray.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/QueueArray.o QueueArray.cpp

${OBJECTDIR}/QueueArrayCircular.o: QueueArrayCircular.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/QueueArrayCircular.o QueueArrayCircular.cpp

${OBJECTDIR}/QueueArrayFrontRear.o: QueueArrayFrontRear.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/QueueArrayFrontRear.o QueueArrayFrontRear.cpp

${OBJECTDIR}/StackArray.o: StackArray.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/StackArray.o StackArray.cpp

${OBJECTDIR}/StackLinkedList.o: StackLinkedList.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/StackLinkedList.o StackLinkedList.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
