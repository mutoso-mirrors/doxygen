"<?xml version='1.0' encoding='utf-8' ?>\n"
"<xsd:schema xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\">\n"
"  <xsd:element name=\"doxygen\" type=\"DoxygenType\"/>\n"
"\n"
"  <!-- Complex types -->\n"
"\n"
"  <xsd:complexType name=\"DoxygenType\">\n"
"    <xsd:sequence maxOccurs=\"unbounded\">\n"
"      <xsd:element name=\"compounddef\" type=\"compounddefType\" minOccurs=\"0\" />\n"
"    </xsd:sequence>\n"
"    <xsd:attribute name=\"version\" type=\"DoxVersionNumber\" use=\"required\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"compounddefType\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"compoundname\" type=\"xsd:string\"/>\n"
"      <xsd:element name=\"title\" type=\"xsd:string\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"basecompoundref\" type=\"compoundRefType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"derivedcompoundref\" type=\"compoundRefType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"includes\" type=\"incType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"includedby\" type=\"incType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"incdepgraph\" type=\"graphType\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"invincdepgraph\" type=\"graphType\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"innerdir\" type=\"refType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"innerfile\" type=\"refType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"innerclass\" type=\"refType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"innernamespace\" type=\"refType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"innerpage\" type=\"refType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"innergroup\" type=\"refType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"templateparamlist\" type=\"templateparamlistType\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"sectiondef\" type=\"sectiondefType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"briefdescription\" type=\"descriptionType\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"detaileddescription\" type=\"descriptionType\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"inheritancegraph\" type=\"graphType\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"collaborationgraph\" type=\"graphType\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"programlisting\" type=\"listingType\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"location\" type=\"locationType\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"listofallmembers\" type=\"listofallmembersType\" minOccurs=\"0\" />\n"
"    </xsd:sequence>\n"
"    <xsd:attribute name=\"id\" type=\"xsd:string\" />\n"
"    <xsd:attribute name=\"kind\" type=\"DoxCompoundKind\" />\n"
"    <xsd:attribute name=\"prot\" type=\"DoxProtectionKind\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"listofallmembersType\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"member\" type=\"memberRefType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"    </xsd:sequence>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"memberRefType\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"scope\" />\n"
"      <xsd:element name=\"name\" />\n"
"    </xsd:sequence>\n"
"    <xsd:attribute name=\"refid\" type=\"xsd:string\" />\n"
"    <xsd:attribute name=\"prot\" type=\"DoxProtectionKind\" />\n"
"    <xsd:attribute name=\"virt\" type=\"DoxVirtualKind\" />\n"
"    <xsd:attribute name=\"ambiguityscope\" type=\"xsd:string\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"compoundRefType\" mixed=\"true\">\n"
"    <xsd:simpleContent>\n"
"      <xsd:extension base=\"xsd:string\">\n"
"        <xsd:attribute name=\"refid\" type=\"xsd:string\" use=\"optional\" />\n"
"        <xsd:attribute name=\"prot\" type=\"DoxProtectionKind\" />\n"
"        <xsd:attribute name=\"virt\" type=\"DoxVirtualKind\" />\n"
"      </xsd:extension>\n"
"    </xsd:simpleContent>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"reimplementType\" mixed=\"true\">\n"
"    <xsd:simpleContent>\n"
"      <xsd:extension base=\"xsd:string\">\n"
"        <xsd:attribute name=\"refid\" type=\"xsd:string\" />\n"
"      </xsd:extension>\n"
"    </xsd:simpleContent>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"incType\" mixed=\"true\">\n"
"    <xsd:simpleContent>\n"
"      <xsd:extension base=\"xsd:string\">\n"
"        <xsd:attribute name=\"refid\" type=\"xsd:string\" />\n"
"        <xsd:attribute name=\"local\" type=\"DoxBool\" />\n"
"      </xsd:extension>\n"
"    </xsd:simpleContent>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"refType\" mixed=\"true\">\n"
"    <xsd:simpleContent>\n"
"      <xsd:extension base=\"xsd:string\">\n"
"        <xsd:attribute name=\"refid\" type=\"xsd:string\" />\n"
"      </xsd:extension>\n"
"    </xsd:simpleContent>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"refTextType\" mixed=\"true\">\n"
"    <xsd:simpleContent>\n"
"      <xsd:extension base=\"xsd:string\">\n"
"       <xsd:attribute name=\"refid\" type=\"xsd:string\" />\n"
"       <xsd:attribute name=\"kindref\" type=\"DoxRefKind\" />\n"
"       <xsd:attribute name=\"external\" type=\"xsd:string\" />\n"
"      </xsd:extension>\n"
"    </xsd:simpleContent>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"sectiondefType\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"header\" type=\"xsd:string\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"description\" type=\"descriptionType\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"memberdef\" type=\"memberdefType\" maxOccurs=\"unbounded\" />\n"
"    </xsd:sequence>\n"
"    <xsd:attribute name=\"kind\" type=\"DoxSectionKind\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"memberdefType\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"templateparamlist\" type=\"templateparamlistType\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"type\" type=\"linkedTextType\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"definition\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"argsstring\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"name\" />\n"
"      <xsd:element name=\"read\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"write\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"reimplements\" type=\"reimplementType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"reimplementedby\" type=\"reimplementType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"param\" type=\"paramType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"enumvalue\" type=\"enumvalueType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"initializer\" type=\"linkedTextType\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"exceptions\" type=\"linkedTextType\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"briefdescription\" type=\"descriptionType\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"detaileddescription\" type=\"descriptionType\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"inbodydescription\" type=\"descriptionType\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"location\" type=\"locationType\" />\n"
"      <xsd:element name=\"references\" type=\"referenceType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"referencedby\" type=\"referenceType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"    </xsd:sequence>\n"
"    <xsd:attribute name=\"kind\" type=\"DoxMemberKind\" />\n"
"    <xsd:attribute name=\"id\" type=\"xsd:string\" />\n"
"    <xsd:attribute name=\"prot\" type=\"DoxProtectionKind\" />\n"
"    <xsd:attribute name=\"static\" type=\"DoxBool\" />\n"
"    <xsd:attribute name=\"const\" type=\"DoxBool\" />\n"
"    <xsd:attribute name=\"explicit\" type=\"DoxBool\" />\n"
"    <xsd:attribute name=\"inline\" type=\"DoxBool\" />\n"
"    <xsd:attribute name=\"virt\" type=\"DoxVirtualKind\" />\n"
"    <xsd:attribute name=\"volatile\" type=\"DoxBool\" />\n"
"    <xsd:attribute name=\"mutable\" type=\"DoxBool\" />\n"
"    <xsd:attribute name=\"readable\" type=\"DoxBool\" use=\"optional\"/>\n"
"    <xsd:attribute name=\"writable\" type=\"DoxBool\" use=\"optional\"/>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"descriptionType\" mixed=\"true\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"para\" type=\"docParaType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"sect1\" type=\"docSect1Type\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"internal\" type=\"docInternalType\" minOccurs=\"0\" />\n"
"    </xsd:sequence>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"enumvalueType\" mixed=\"true\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"name\" />\n"
"      <xsd:element name=\"initializer\" type=\"linkedTextType\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"briefdescription\" type=\"descriptionType\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"detaileddescription\" type=\"descriptionType\" minOccurs=\"0\" />\n"
"    </xsd:sequence>\n"
"    <xsd:attribute name=\"id\" type=\"xsd:string\" />\n"
"    <xsd:attribute name=\"prot\" type=\"DoxProtectionKind\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"templateparamlistType\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"param\" type=\"paramType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"    </xsd:sequence>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"paramType\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"type\" type=\"linkedTextType\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"declname\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"defname\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"array\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"defval\" type=\"linkedTextType\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"briefdescription\" type=\"descriptionType\" minOccurs=\"0\" />\n"
"    </xsd:sequence>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"linkedTextType\" mixed=\"true\">\n"
"    <xsd:sequence>\n"
"    <xsd:element name=\"ref\" type=\"refTextType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"    </xsd:sequence>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"graphType\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"node\" type=\"nodeType\" maxOccurs=\"unbounded\" />\n"
"    </xsd:sequence>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"nodeType\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"label\" />\n"
"      <xsd:element name=\"link\" type=\"linkType\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"childnode\" type=\"childnodeType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"    </xsd:sequence>\n"
"    <xsd:attribute name=\"id\" type=\"xsd:string\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"childnodeType\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"edgelabel\" minOccurs=\"0\" maxOccurs=\"unbounded\"/>\n"
"    </xsd:sequence>\n"
"    <xsd:attribute name=\"refid\" type=\"xsd:string\" />\n"
"    <xsd:attribute name=\"relation\" type=\"DoxGraphRelation\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"linkType\">\n"
"    <xsd:attribute name=\"refid\" type=\"xsd:string\" />\n"
"    <xsd:attribute name=\"external\" type=\"xsd:string\" use=\"optional\"/>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"listingType\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"codeline\" type=\"codelineType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"    </xsd:sequence>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"codelineType\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"highlight\" type=\"highlightType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"    </xsd:sequence>\n"
"    <xsd:attribute name=\"lineno\" type=\"xsd:integer\" />\n"
"    <xsd:attribute name=\"refid\" type=\"xsd:string\" />\n"
"    <xsd:attribute name=\"refkind\" type=\"DoxRefKind\" />\n"
"    <xsd:attribute name=\"external\" type=\"DoxBool\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"highlightType\" mixed=\"true\">\n"
"    <xsd:choice minOccurs=\"0\" maxOccurs=\"unbounded\">\n"
"      <xsd:element name=\"sp\" />\n"
"      <xsd:element name=\"ref\" type=\"refTextType\" />\n"
"    </xsd:choice>\n"
"    <xsd:attribute name=\"class\" type=\"DoxHighlightClass\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"referenceType\" mixed=\"true\">\n"
"    <xsd:attribute name=\"refid\" type=\"xsd:string\" />\n"
"    <xsd:attribute name=\"compoundref\" type=\"xsd:string\" use=\"optional\" />\n"
"    <xsd:attribute name=\"startline\" type=\"xsd:integer\" />\n"
"    <xsd:attribute name=\"endline\" type=\"xsd:integer\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"locationType\">\n"
"    <xsd:attribute name=\"file\" type=\"xsd:string\" />\n"
"    <xsd:attribute name=\"line\" type=\"xsd:integer\" />\n"
"    <xsd:attribute name=\"bodyfile\" type=\"xsd:string\" />\n"
"    <xsd:attribute name=\"bodystart\" type=\"xsd:integer\" />\n"
"    <xsd:attribute name=\"bodyend\" type=\"xsd:integer\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docSect1Type\" mixed=\"true\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"title\" type=\"xsd:string\" />	    \n"
"      <xsd:element name=\"para\" type=\"docParaType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"sect2\" type=\"docSect2Type\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"internal\" type=\"docInternalS1Type\" minOccurs=\"0\" />\n"
"    </xsd:sequence>\n"
"    <xsd:attribute name=\"id\" type=\"xsd:string\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docSect2Type\" mixed=\"true\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"title\" type=\"xsd:string\" />	    \n"
"      <xsd:element name=\"para\" type=\"docParaType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"sect3\" type=\"docSect3Type\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"internal\" type=\"docInternalS2Type\" minOccurs=\"0\" />\n"
"    </xsd:sequence>\n"
"    <xsd:attribute name=\"id\" type=\"xsd:string\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docSect3Type\" mixed=\"true\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"title\" type=\"xsd:string\" />	    \n"
"      <xsd:element name=\"para\" type=\"docParaType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"sect4\" type=\"docSect4Type\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"internal\" type=\"docInternalS3Type\" minOccurs=\"0\" />\n"
"    </xsd:sequence>\n"
"    <xsd:attribute name=\"id\" type=\"xsd:string\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docSect4Type\" mixed=\"true\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"title\" type=\"xsd:string\" />	    \n"
"      <xsd:element name=\"para\" type=\"docParaType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"internal\" type=\"docInternalS4Type\" minOccurs=\"0\" />\n"
"    </xsd:sequence>\n"
"    <xsd:attribute name=\"id\" type=\"xsd:string\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docInternalType\" mixed=\"true\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"para\"  type=\"docParaType\"  minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"sect1\" type=\"docSect1Type\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"    </xsd:sequence>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docInternalS1Type\" mixed=\"true\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"para\"  type=\"docParaType\"  minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"sect2\" type=\"docSect2Type\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"    </xsd:sequence>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docInternalS2Type\" mixed=\"true\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"para\"  type=\"docParaType\"  minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"sect3\" type=\"docSect3Type\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"    </xsd:sequence>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docInternalS3Type\" mixed=\"true\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"para\"  type=\"docParaType\"  minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"sect3\" type=\"docSect4Type\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"    </xsd:sequence>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docInternalS4Type\" mixed=\"true\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"para\"  type=\"docParaType\"  minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"    </xsd:sequence>\n"
"  </xsd:complexType>\n"
" \n"
"  <xsd:group name=\"docTitleCmdGroup\">\n"
"    <xsd:choice>\n"
"      <xsd:element name=\"ulink\" type=\"docURLLink\" />\n"
"      <xsd:element name=\"bold\" type=\"docMarkupType\" />\n"
"      <xsd:element name=\"emphasis\" type=\"docMarkupType\" />\n"
"      <xsd:element name=\"computeroutput\" type=\"docMarkupType\" />\n"
"      <xsd:element name=\"subscript\" type=\"docMarkupType\" />\n"
"      <xsd:element name=\"superscript\" type=\"docMarkupType\" />\n"
"      <xsd:element name=\"center\" type=\"docMarkupType\" />\n"
"      <xsd:element name=\"small\" type=\"docMarkupType\" />\n"
"      <xsd:element name=\"htmlonly\" type=\"xsd:string\" />\n"
"      <xsd:element name=\"latexonly\" type=\"xsd:string\" />\n"
"      <xsd:element name=\"dot\" type=\"xsd:string\" />\n"
"      <xsd:element name=\"anchor\" type=\"docAnchorType\" />\n"
"      <xsd:element name=\"formula\" type=\"docFormulaType\" />\n"
"      <xsd:element name=\"ref\" type=\"docRefTextType\" />\n"
"      <xsd:element name=\"copy\" type=\"docEmptyType\" />\n"
"      <xsd:element name=\"trademark\" type=\"docEmptyType\" />\n"
"      <xsd:element name=\"registered\" type=\"docEmptyType\" />\n"
"      <xsd:element name=\"umlaut\" type=\"docCharType\" />\n"
"      <xsd:element name=\"acute\" type=\"docCharType\" />\n"
"      <xsd:element name=\"grave\" type=\"docCharType\" />\n"
"      <xsd:element name=\"circ\" type=\"docCharType\" />\n"
"      <xsd:element name=\"slash\" type=\"docCharType\" />\n"
"      <xsd:element name=\"tilde\" type=\"docCharType\" />\n"
"      <xsd:element name=\"cedil\" type=\"docCharType\" />\n"
"      <xsd:element name=\"ring\" type=\"docCharType\" />\n"
"      <xsd:element name=\"szlig\" type=\"docEmptyType\" />\n"
"      <xsd:element name=\"nonbreakablespace\" type=\"docEmptyType\" />\n"
"    </xsd:choice>\n"
"  </xsd:group>\n"
"\n"
"  <xsd:complexType name=\"docTitleType\" mixed=\"true\">\n"
"    <xsd:group ref=\"docTitleCmdGroup\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:group name=\"docCmdGroup\">\n"
"    <xsd:choice>\n"
"      <xsd:group ref=\"docTitleCmdGroup\"/>\n"
"      <xsd:element name=\"linebreak\" type=\"docEmptyType\" />\n"
"      <xsd:element name=\"hruler\" type=\"docEmptyType\" />\n"
"      <xsd:element name=\"preformatted\" type=\"docMarkupType\" />\n"
"      <xsd:element name=\"programlisting\" type=\"listingType\" />\n"
"      <xsd:element name=\"verbatim\" type=\"xsd:string\" />\n"
"      <xsd:element name=\"indexentry\" type=\"docIndexEntryType\" />\n"
"      <xsd:element name=\"orderedlist\" type=\"docListType\" />\n"
"      <xsd:element name=\"itemizedlist\" type=\"docListType\" />\n"
"      <xsd:element name=\"simplesect\" type=\"docSimpleSectType\" />\n"
"      <xsd:element name=\"title\" type=\"docTitleType\" />\n"
"      <xsd:element name=\"variablelist\" type=\"docVariableListType\" />\n"
"      <xsd:element name=\"table\" type=\"docTableType\" />\n"
"      <xsd:element name=\"heading\" type=\"docHeadingType\" />\n"
"      <xsd:element name=\"image\" type=\"docImageType\" />\n"
"      <xsd:element name=\"dotfile\" type=\"docDotFileType\" />\n"
"      <xsd:element name=\"toclist\" type=\"docTocListType\" />\n"
"      <xsd:element name=\"language\" type=\"docLanguageType\" />\n"
"      <xsd:element name=\"parameterlist\" type=\"docParamListType\" />\n"
"      <xsd:element name=\"xrefsect\" type=\"docXRefSectType\" />\n"
"      <xsd:element name=\"copydoc\" type=\"docCopyType\" />\n"
"    </xsd:choice>\n"
"  </xsd:group>\n"
"\n"
"  <xsd:complexType name=\"docParaType\" mixed=\"true\">\n"
"    <xsd:group ref=\"docCmdGroup\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docMarkupType\" mixed=\"true\">\n"
"    <xsd:group ref=\"docCmdGroup\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docURLLink\" mixed=\"true\">\n"
"    <xsd:group ref=\"docTitleCmdGroup\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"    <xsd:attribute name=\"url\" type=\"xsd:string\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docAnchorType\" mixed=\"true\">\n"
"    <xsd:attribute name=\"id\" type=\"xsd:string\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docFormulaType\" mixed=\"true\">\n"
"    <xsd:attribute name=\"id\" type=\"xsd:string\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docIndexEntryType\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"primaryie\" type=\"xsd:string\" />\n"
"      <xsd:element name=\"secondaryie\" type=\"xsd:string\" />\n"
"    </xsd:sequence>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docListType\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"listitem\" type=\"docListItemType\" maxOccurs=\"unbounded\" />\n"
"    </xsd:sequence>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docListItemType\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"para\" type=\"docParaType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"    </xsd:sequence>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docSimpleSectType\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"title\" type=\"docTitleType\" minOccurs=\"0\" />\n"
"      <xsd:element name=\"para\" type=\"docParaType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"    </xsd:sequence>\n"
"    <xsd:attribute name=\"kind\" type=\"DoxSimpleSectKind\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docVarListEntryType\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"term\" type=\"docTitleType\" />\n"
"    </xsd:sequence>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:group name=\"docVariableListGroup\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"varlistentry\" type=\"docVarListEntryType\" />\n"
"      <xsd:element name=\"listitem\" type=\"docListItemType\" />\n"
"    </xsd:sequence>\n"
"  </xsd:group>\n"
"\n"
"  <xsd:complexType name=\"docVariableListType\">\n"
"    <xsd:sequence>\n"
"      <xsd:group ref=\"docVariableListGroup\" maxOccurs=\"unbounded\" />\n"
"    </xsd:sequence>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docRefTextType\" mixed=\"true\">\n"
"    <xsd:group ref=\"docTitleCmdGroup\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"    <xsd:attribute name=\"refid\" type=\"xsd:string\" />\n"
"    <xsd:attribute name=\"kindref\" type=\"DoxRefKind\" />\n"
"    <xsd:attribute name=\"external\" type=\"xsd:string\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docTableType\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"row\" type=\"docRowType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"caption\" type=\"docCaptionType\" minOccurs=\"0\" />\n"
"    </xsd:sequence>\n"
"    <xsd:attribute name=\"rows\" type=\"xsd:integer\" />\n"
"    <xsd:attribute name=\"cols\" type=\"xsd:integer\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docRowType\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"entry\" type=\"docEntryType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"    </xsd:sequence>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docEntryType\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"para\" type=\"docParaType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"    </xsd:sequence>\n"
"    <xsd:attribute name=\"thead\" type=\"DoxBool\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docCaptionType\" mixed=\"true\">\n"
"    <xsd:group ref=\"docTitleCmdGroup\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docHeadingType\" mixed=\"true\">\n"
"    <xsd:group ref=\"docTitleCmdGroup\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"    <xsd:attribute name=\"level\" type=\"xsd:integer\" /> <!-- todo: range 1-6 -->\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docImageType\" mixed=\"true\">\n"
"    <xsd:group ref=\"docTitleCmdGroup\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"    <xsd:attribute name=\"type\" type=\"DoxImageKind\" /> \n"
"    <xsd:attribute name=\"name\" type=\"xsd:string\" /> \n"
"    <xsd:attribute name=\"width\" type=\"xsd:string\" /> \n"
"    <xsd:attribute name=\"height\" type=\"xsd:string\" /> \n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docDotFileType\" mixed=\"true\">\n"
"    <xsd:group ref=\"docTitleCmdGroup\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"    <xsd:attribute name=\"name\" type=\"xsd:string\" /> \n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docTocItemType\" mixed=\"true\">\n"
"    <xsd:group ref=\"docTitleCmdGroup\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"    <xsd:attribute name=\"id\" type=\"xsd:string\" /> \n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docTocListType\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"tocitem\" type=\"docTocItemType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"    </xsd:sequence>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docLanguageType\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"para\" type=\"docParaType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"    </xsd:sequence>\n"
"    <xsd:attribute name=\"langid\" type=\"xsd:string\" /> \n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docParamListType\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"parameteritem\" type=\"docParamListItem\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"    </xsd:sequence>\n"
"    <xsd:attribute name=\"kind\" type=\"DoxParamListKind\" /> \n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docParamListItem\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"parameternamelist\" type=\"docParamNameList\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"parameterdescription\" type=\"descriptionType\" />\n"
"    </xsd:sequence>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docParamNameList\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"parametername\" type=\"docParamName\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"    </xsd:sequence>\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docParamName\" mixed=\"true\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"ref\" type=\"refTextType\" minOccurs=\"0\" maxOccurs=\"1\" />\n"
"    </xsd:sequence>\n"
"    <xsd:attribute name=\"direction\" type=\"DoxParamDir\" use=\"optional\" />\n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docXRefSectType\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"xreftitle\" type=\"xsd:string\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"xrefdescription\" type=\"descriptionType\" />\n"
"    </xsd:sequence>\n"
"    <xsd:attribute name=\"id\" type=\"xsd:string\" /> \n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docCopyType\">\n"
"    <xsd:sequence>\n"
"      <xsd:element name=\"para\" type=\"docParaType\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"sect1\" type=\"docSect1Type\" minOccurs=\"0\" maxOccurs=\"unbounded\" />\n"
"      <xsd:element name=\"internal\" type=\"docInternalType\" minOccurs=\"0\" />\n"
"    </xsd:sequence>\n"
"    <xsd:attribute name=\"link\" type=\"xsd:string\" /> \n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docCharType\">\n"
"    <xsd:attribute name=\"char\" type=\"DoxCharRange\"/> \n"
"  </xsd:complexType>\n"
"\n"
"  <xsd:complexType name=\"docEmptyType\"/>\n"
"\n"
"  <!-- Simple types -->\n"
"\n"
"  <xsd:simpleType name=\"DoxBool\">\n"
"    <xsd:restriction base=\"xsd:string\">\n"
"      <xsd:enumeration value=\"yes\" />\n"
"      <xsd:enumeration value=\"no\" />\n"
"    </xsd:restriction>\n"
"  </xsd:simpleType>\n"
"\n"
"  <xsd:simpleType name=\"DoxGraphRelation\">\n"
"    <xsd:restriction base=\"xsd:string\">\n"
"      <xsd:enumeration value=\"include\" />\n"
"      <xsd:enumeration value=\"usage\" />\n"
"      <xsd:enumeration value=\"template-instance\" />\n"
"      <xsd:enumeration value=\"public-inheritance\" />\n"
"      <xsd:enumeration value=\"protected-inheritance\" />\n"
"      <xsd:enumeration value=\"private-inheritance\" />\n"
"    </xsd:restriction>\n"
"  </xsd:simpleType>\n"
"\n"
"  <xsd:simpleType name=\"DoxRefKind\">\n"
"    <xsd:restriction base=\"xsd:string\">\n"
"      <xsd:enumeration value=\"compound\" />\n"
"      <xsd:enumeration value=\"member\" />\n"
"    </xsd:restriction>\n"
"  </xsd:simpleType>\n"
"\n"
"  <xsd:simpleType name=\"DoxMemberKind\">\n"
"    <xsd:restriction base=\"xsd:string\">\n"
"      <xsd:enumeration value=\"define\" />\n"
"      <xsd:enumeration value=\"property\" />\n"
"      <xsd:enumeration value=\"event\" />\n"
"      <xsd:enumeration value=\"variable\" />\n"
"      <xsd:enumeration value=\"typedef\" />\n"
"      <xsd:enumeration value=\"enum\" />\n"
"      <xsd:enumeration value=\"function\" />\n"
"      <xsd:enumeration value=\"signal\" />\n"
"      <xsd:enumeration value=\"prototype\" />\n"
"      <xsd:enumeration value=\"friend\" />\n"
"      <xsd:enumeration value=\"dcop\" />\n"
"      <xsd:enumeration value=\"slot\" />\n"
"    </xsd:restriction>\n"
"  </xsd:simpleType>\n"
"\n"
"  <xsd:simpleType name=\"DoxProtectionKind\">\n"
"    <xsd:restriction base=\"xsd:string\">\n"
"      <xsd:enumeration value=\"public\" />\n"
"      <xsd:enumeration value=\"protected\" />\n"
"      <xsd:enumeration value=\"private\" />\n"
"      <xsd:enumeration value=\"package\" />\n"
"    </xsd:restriction>\n"
"  </xsd:simpleType>\n"
"\n"
"  <xsd:simpleType name=\"DoxVirtualKind\">\n"
"    <xsd:restriction base=\"xsd:string\">\n"
"      <xsd:enumeration value=\"non-virtual\" />\n"
"      <xsd:enumeration value=\"virtual\" />\n"
"      <xsd:enumeration value=\"pure-virtual\" />\n"
"    </xsd:restriction>\n"
"  </xsd:simpleType>\n"
"\n"
"  <xsd:simpleType name=\"DoxCompoundKind\">\n"
"    <xsd:restriction base=\"xsd:string\">\n"
"      <xsd:enumeration value=\"class\" />\n"
"      <xsd:enumeration value=\"struct\" />\n"
"      <xsd:enumeration value=\"union\" />\n"
"      <xsd:enumeration value=\"interface\" />\n"
"      <xsd:enumeration value=\"protocol\" />\n"
"      <xsd:enumeration value=\"category\" />\n"
"      <xsd:enumeration value=\"exception\" />\n"
"      <xsd:enumeration value=\"file\" />\n"
"      <xsd:enumeration value=\"namespace\" />\n"
"      <xsd:enumeration value=\"group\" />\n"
"      <xsd:enumeration value=\"page\" />\n"
"      <xsd:enumeration value=\"example\" />\n"
"      <xsd:enumeration value=\"dir\" />\n"
"    </xsd:restriction>\n"
"  </xsd:simpleType>\n"
"\n"
"  <xsd:simpleType name=\"DoxSectionKind\">\n"
"    <xsd:restriction base=\"xsd:string\">\n"
"      <xsd:enumeration value=\"user-defined\" />\n"
"      <xsd:enumeration value=\"public-type\" />\n"
"      <xsd:enumeration value=\"public-func\" />\n"
"      <xsd:enumeration value=\"public-attrib\" />\n"
"      <xsd:enumeration value=\"public-slot\" />\n"
"      <xsd:enumeration value=\"signal\" />\n"
"      <xsd:enumeration value=\"dcop-func\" />\n"
"      <xsd:enumeration value=\"property\" />\n"
"      <xsd:enumeration value=\"event\" />\n"
"      <xsd:enumeration value=\"public-static-func\" />\n"
"      <xsd:enumeration value=\"public-static-attrib\" />\n"
"      <xsd:enumeration value=\"protected-type\" />\n"
"      <xsd:enumeration value=\"protected-func\" />\n"
"      <xsd:enumeration value=\"protected-attrib\" />\n"
"      <xsd:enumeration value=\"protected-slot\" />\n"
"      <xsd:enumeration value=\"protected-static-func\" />\n"
"      <xsd:enumeration value=\"protected-static-attrib\" />\n"
"      <xsd:enumeration value=\"package-type\" />\n"
"      <xsd:enumeration value=\"package-func\" />\n"
"      <xsd:enumeration value=\"package-attrib\" />\n"
"      <xsd:enumeration value=\"package-static-func\" />\n"
"      <xsd:enumeration value=\"package-static-attrib\" />\n"
"      <xsd:enumeration value=\"private-type\" />\n"
"      <xsd:enumeration value=\"private-func\" />\n"
"      <xsd:enumeration value=\"private-attrib\" />\n"
"      <xsd:enumeration value=\"private-slot\" />\n"
"      <xsd:enumeration value=\"private-static-func\" />\n"
"      <xsd:enumeration value=\"private-static-attrib\" />\n"
"      <xsd:enumeration value=\"friend\" />\n"
"      <xsd:enumeration value=\"related\" />\n"
"      <xsd:enumeration value=\"define\" />\n"
"      <xsd:enumeration value=\"prototype\" />\n"
"      <xsd:enumeration value=\"typedef\" />\n"
"      <xsd:enumeration value=\"enum\" />\n"
"      <xsd:enumeration value=\"func\" />\n"
"      <xsd:enumeration value=\"var\" />\n"
"    </xsd:restriction>\n"
"  </xsd:simpleType>\n"
"\n"
"  <xsd:simpleType name=\"DoxHighlightClass\">\n"
"    <xsd:restriction base=\"xsd:string\">\n"
"      <xsd:enumeration value=\"comment\" />\n"
"      <xsd:enumeration value=\"normal\" />\n"
"      <xsd:enumeration value=\"preprocessor\" />\n"
"      <xsd:enumeration value=\"keyword\" />\n"
"      <xsd:enumeration value=\"keywordtype\" />\n"
"      <xsd:enumeration value=\"keywordflow\" />\n"
"      <xsd:enumeration value=\"stringliteral\" />\n"
"      <xsd:enumeration value=\"charliteral\" />\n"
"    </xsd:restriction>\n"
"  </xsd:simpleType>\n"
"\n"
"  <xsd:simpleType name=\"DoxSimpleSectKind\">\n"
"    <xsd:restriction base=\"xsd:string\">\n"
"      <xsd:enumeration value=\"see\" />\n"
"      <xsd:enumeration value=\"return\" />\n"
"      <xsd:enumeration value=\"author\" />\n"
"      <xsd:enumeration value=\"authors\" />\n"
"      <xsd:enumeration value=\"version\" />\n"
"      <xsd:enumeration value=\"since\" />\n"
"      <xsd:enumeration value=\"date\" />\n"
"      <xsd:enumeration value=\"note\" />\n"
"      <xsd:enumeration value=\"warning\" />\n"
"      <xsd:enumeration value=\"pre\" />\n"
"      <xsd:enumeration value=\"post\" />\n"
"      <xsd:enumeration value=\"invariant\" />\n"
"      <xsd:enumeration value=\"remark\" />\n"
"      <xsd:enumeration value=\"attention\" />\n"
"      <xsd:enumeration value=\"par\" />\n"
"      <xsd:enumeration value=\"rcs\" />\n"
"    </xsd:restriction>\n"
"  </xsd:simpleType>\n"
"\n"
"  <xsd:simpleType name=\"DoxVersionNumber\">\n"
"    <xsd:restriction base=\"xsd:string\">\n"
"      <xsd:pattern value=\"\\d+\\.\\d+.*\" />\n"
"    </xsd:restriction>\n"
"  </xsd:simpleType>\n"
"\n"
"  <xsd:simpleType name=\"DoxImageKind\">\n"
"    <xsd:restriction base=\"xsd:string\">\n"
"      <xsd:enumeration value=\"html\" />\n"
"      <xsd:enumeration value=\"latex\" />\n"
"      <xsd:enumeration value=\"rtf\" />\n"
"    </xsd:restriction>\n"
"  </xsd:simpleType>\n"
"\n"
"  <xsd:simpleType name=\"DoxParamListKind\">\n"
"    <xsd:restriction base=\"xsd:string\">\n"
"      <xsd:enumeration value=\"param\" />\n"
"      <xsd:enumeration value=\"retval\" />\n"
"      <xsd:enumeration value=\"exception\" />\n"
"    </xsd:restriction>\n"
"  </xsd:simpleType>\n"
"\n"
"  <xsd:simpleType name=\"DoxCharRange\">\n"
"    <xsd:restriction base=\"xsd:string\">\n"
"      <xsd:pattern value=\"[aeiouncAEIOUNC]\" />\n"
"    </xsd:restriction>\n"
"  </xsd:simpleType>\n"
"\n"
"  <xsd:simpleType name=\"DoxParamDir\">\n"
"    <xsd:restriction base=\"xsd:string\">\n"
"      <xsd:enumeration value=\"in\"/>\n"
"      <xsd:enumeration value=\"out\"/>\n"
"      <xsd:enumeration value=\"inout\"/>\n"
"    </xsd:restriction>\n"
"  </xsd:simpleType>\n"
"\n"
"</xsd:schema>\n"
"\n"
