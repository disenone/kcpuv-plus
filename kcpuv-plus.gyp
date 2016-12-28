{
    'target_defaults': {
        'default_configuration': 'Release',
        'configurations': {
            'Debug': {
                'defines': [ 'DEBUG', '_DEBUG' ],
                'msvs_settings': {
                    'VCCLCompilerTool': {
                        'RuntimeLibrary': 1, 
                    },
                    'VCLinkerTool': {
                        'LinkTimeCodeGeneration': 1,
                        'OptimizeReferences': 2,
                        'EnableCOMDATFolding': 2,
                        'LinkIncremental': 1,
                        'GenerateDebugInformation': 'true',
                        'AdditionalLibraryDirectories': [
                        ]
                    }          
                },
                'xcode_settings': {
                    'OTHER_LDFLAGS': [
                    ]
                }
            },
            'Release': {
                'defines': [ 'NDEBUG' ],
                'msvs_settings': {
                    'VCCLCompilerTool': {
                        'RuntimeLibrary': 0,
                        'Optimization': 3,
                        'FavorSizeOrSpeed': 1,
                        'InlineFunctionExpansion': 2,
                        'WholeProgramOptimization': 'true',
                        'OmitFramePointers': 'true',
                        'EnableFunctionLevelLinking': 'true',
                        'EnableIntrinsicFunctions': 'true'            
                    },
                    'VCLinkerTool': {
                        'LinkTimeCodeGeneration': 1,
                        'OptimizeReferences': 2,
                        'EnableCOMDATFolding': 2,
                        'LinkIncremental': 1,
                        'AdditionalLibraryDirectories': [
                        ]            
                    }          
                },
                'xcode_settings': {
                    'OTHER_LDFLAGS': [
                    ]
                }
            }
        }  
    },

    'targets': [
        {
            'target_name': 'test_gyp',
                'type': 'executable',
                'include_dirs': [
                    'test',
                ],
                'sources': [
                    'test/test_gyp.cpp',
                ],
        }
    ],
}
