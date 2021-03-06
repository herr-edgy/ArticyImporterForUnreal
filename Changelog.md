## Unreal Importer 0.0.5 Changelog

- Disclaimer: Please perform a 'full reimport' after upgrading to this version of the importer by going into the plugin settings and clicking 'Force complete reimport'
In case error messages pop up, please close Unreal, recompile the project inside Visual Studio and start up the engine again.
This is due to Unreal's Hot Reload not handling changes in header files well. Due to class hierarchies changing this can lead to temporary error messages.

- Articy Asset Picker added for ArticyRef variables
    - The new asset picker enables an easy lookup and selection of imported articy objects
    - Tooltips provide more information on the various objects
    - Double clicking the image of an ArticyRef variable opens up the selected asset inside Unreal
    - The articy button next to the image opens up the selected object in articy:draft
    - When expanding the ArticyRef variable, a class filter can be set to allow the asset picker to only show select objects (dialogue fragments, entities etc.)
    - A search filter lets you browse through the available objects. You can filter by class name, ID, text, speakers and various other attributes

- One Unreal asset per package
    - An exported package in articy:draft now generates one asset inside Unreal with all specified data inside.
    This allows for much faster reimports as less assets have to be handled when reimporting

- Import optimization:
    - When hitting the Import button, a compilation process now only happens when script fragments, template definitions or global variables changed.
    If none of these changed, the import process finishes almost immediately

- Blueprint:
    - Added: GetOutputPins function for all classes that implement the OutputPinsProvider interface (e.g. all flow objects)
    - Added: ArticyPin: GetOwner function is now BlueprintCallable
    - Added: GlobalVariables: GetVariablesOfType function added in which you can specify what type of variables you want (all, Ints, Strings or Bools)
    - Added: ArticyAsset: LoadAsset function
    - Changed: Target & TargetPin of ArticyJump are now BlueprintReadOnly instead of BlueprintReadWrite

- C++:
    - Added: UArticyJump: GetTargetID and GetTargetPinID functions (same access rules as in Blueprints)
    - Added: UArticyObject: GetArticyObjectChildrenIDs function (returns all children IDs that represent ArticyObjects)
    - Added: UArticyObject: GetParentID and GetChildrenIDs() functions
    - Changed: FindAsset function moved from UArticyPrimitive to UArticyObject
    - Changed: Renamed GetOutputPins function to GetOutputPinsPtr
    - Changed: All headers were moved to the Public folder, all cpp files were moved to the Private folder

- General:
    - UE 4.19 is no longer supported starting with this release. Please use the dedicated UE 4.19 plugin instead
    - Added: If Perforce is used for source control, the generated code is now automatically checked out
    - Added: Console Command: "ArticyImporter.Reimport" works as if hitting the import button when prompted (adaptive reimport)
    - Changed: ArticyRef helper functions now take UArticyObjects as parameters instead of UArticyPrimitives
    - Changed: Various generated classes now inherit from more fitting classes rather than from ArticyObject ({YourProject}Entity now inherits from ArticyEntity instead of ArticyObject)
    - Changed: Generated articy assets in Unreal will now save automatically after being generated
    - Fixed: Removing a GlobalVariable set and reimporting no longer results in uncompileable code
    - Fixed: GlobalVariables: SetByNamespaceAndVariable function now works as intended (parameters were used in the wrong order internally)
    - Fixed: Setting a non-existing global variable inside an existing variable set no longer leads to a crash