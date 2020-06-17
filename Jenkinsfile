pipeline {
  agent any
  stages {
    stage('master') {
      steps {
        git(url: 'https://github.com/cchaoaxp/SPOF.git', branch: 'master')
      }
    }

    stage('QtBuild') {
      post {
        success {
          archiveArtifacts 'QtBuild/Makefile'
        }

      }
      steps {
        sh './buildScript.sh'
      }
    }

    stage('QtUnitTest') {
      steps {
        sh './testScript.sh'
      }
    }

  }
}