##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PECLPerezCamachoLeonardoDaniel
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=C:/Users/nate2/OneDrive/Documentos/PCLJuradoDiazNathan
ProjectPath            :=C:/Users/nate2/OneDrive/Documentos/GitHub/PECLPerezCamachoLeonardoDaniel
IntermediateDirectory  :=../../PCLJuradoDiazNathan/build-$(WorkspaceConfiguration)/__/GitHub/PECLPerezCamachoLeonardoDaniel
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=nate2
Date                   :=17/10/2026
CodeLitePath           :="C:/Program Files/CodeLite/share/codelite"
MakeDirCommand         :=mkdir
LinkerName             :=C:/msys64/ucrt64/bin/g++.exe
SharedObjectLinkerName :=C:/msys64/ucrt64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=
PreprocessSuffix       :=.i
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=C:/Users/nate2/OneDrive/Documentos/PCLJuradoDiazNathan/build-$(WorkspaceConfiguration)/bin
OutputFile             :=..\..\PCLJuradoDiazNathan\build-$(WorkspaceConfiguration)\bin\$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/msys64/ucrt64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := C:/msys64/ucrt64/bin/ar.exe -r
CXX      := C:/msys64/ucrt64/bin/g++.exe
CC       := C:/msys64/ucrt64/bin/gcc.exe
CXXFLAGS :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
CFLAGS   :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/msys64/ucrt64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\codelite-amd64-17.0.0\codelite
Objects0=$(IntermediateDirectory)/NodoPila.cpp$(ObjectSuffix) $(IntermediateDirectory)/Pila.cpp$(ObjectSuffix) $(IntermediateDirectory)/Paciente.cpp$(ObjectSuffix) $(IntermediateDirectory)/Persona.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@if not exist "$(OutputDirectory)" $(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/NodoPila.cpp$(ObjectSuffix): NodoPila.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/nate2/OneDrive/Documentos/GitHub/PECLPerezCamachoLeonardoDaniel/NodoPila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoPila.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/NodoPila.cpp$(PreprocessSuffix): NodoPila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/NodoPila.cpp$(PreprocessSuffix) NodoPila.cpp

$(IntermediateDirectory)/Pila.cpp$(ObjectSuffix): Pila.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/nate2/OneDrive/Documentos/GitHub/PECLPerezCamachoLeonardoDaniel/Pila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pila.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Pila.cpp$(PreprocessSuffix): Pila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Pila.cpp$(PreprocessSuffix) Pila.cpp

$(IntermediateDirectory)/Paciente.cpp$(ObjectSuffix): Paciente.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/nate2/OneDrive/Documentos/GitHub/PECLPerezCamachoLeonardoDaniel/Paciente.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Paciente.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Paciente.cpp$(PreprocessSuffix): Paciente.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Paciente.cpp$(PreprocessSuffix) Paciente.cpp

$(IntermediateDirectory)/Persona.cpp$(ObjectSuffix): Persona.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/nate2/OneDrive/Documentos/GitHub/PECLPerezCamachoLeonardoDaniel/Persona.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Persona.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Persona.cpp$(PreprocessSuffix): Persona.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Persona.cpp$(PreprocessSuffix) Persona.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/nate2/OneDrive/Documentos/GitHub/PECLPerezCamachoLeonardoDaniel/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


